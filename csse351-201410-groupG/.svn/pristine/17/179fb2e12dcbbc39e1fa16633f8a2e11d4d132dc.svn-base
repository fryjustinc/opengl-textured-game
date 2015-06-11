#ifndef __RENDERENGINE
#define __RENDERENGINE

#include <SFML/Graphics.hpp>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "GLHelper.h"
#include "Map.h"

class RenderEngine
{
public:
	Map map;
	unsigned int w;
	unsigned int h;
	
	RenderEngine()
	{

		initialized = false;
		this->P = glm::ortho(-1, 1, -1, 1);

	}

	~RenderEngine()
	{
		if(initialized)
		{
			// Clean up the buffers
			glDeleteBuffers(1, &positionBuffer);
			glDeleteVertexArrays(1, &vertexArray);
		}
	}

	void init(unsigned int const & w, unsigned int const & h)
	{
		time = 0;
		this->w = w;
		this->h = h;
		
		

		setupGlew();
		setupTextures();
		setupShaders();
		generateMap();
		initialized = true;
	}

	void generateMap(){
		Map map();
		this->P = glm::perspective(90.0f, 1.0f, 0.1f, 2.0f*30.0f);

		if(initialized)
			rebuildBuffers();
		else
			setupBuffers();
	}

	void display(bool pickingEnabled=false)
	{

		// Render to our framebuffer
		glBindFramebuffer(GL_FRAMEBUFFER, FramebufferName);
		glViewport(0, 0, 1024, 1024); // Render on the whole framebuffer, complete from the lower left corner to the upper right

		// We don't use bias in the shader, but instead we draw back faces, 
		// which are already separated from the front faces by a small distance 
		// (if your geometry is made this way)
		glEnable(GL_CULL_FACE);
		glCullFace(GL_BACK); // Cull back-facing triangles -> draw only front-facing triangles

		// Clear the screen
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		M = glm::mat4(1.0);
		time++;
		glUseProgram(shadowMap);
		glm::vec3 lightInvDir = glm::vec3(4.0f, 4.0, 4.0);
		// Compute the MVP matrix from the light's point of view
		glm::mat4 depthProjectionMatrix = glm::ortho<float>(-10, 10, -10, 10, -10, 20);
		glm::mat4 depthViewMatrix = glm::lookAt(lightInvDir, glm::vec3(0, 0, 0), glm::vec3(0, 1, 0));
		glm::mat4 depthModelMatrix = glm::mat4(1.0);
		glm::mat4 depthMVP = depthProjectionMatrix * depthViewMatrix * depthModelMatrix;
		glUniformMatrix4fv(depthMVPSlot, 1, GL_FALSE, &depthMVP[0][0]);
		glBindVertexArray(vertexArray);
		int numQuads = map.getVertexCount() / 6;
		for (int i = 0; i < numQuads; i++){
			GLint texUnitId = 0;
			glDrawArrays(GL_TRIANGLES, 6 * i, 6);
			//glDrawArrays(GL_LINE_LOOP, 6*i, 6);
		}
		glBindFramebuffer(GL_FRAMEBUFFER, 0);
		glViewport(0, 0, 1024, 768);
		glEnable(GL_CULL_FACE);
		glCullFace(GL_BACK); 
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glUseProgram(shaderProg);
		glUniform1f(timeSlot, time);
		glUniformMatrix4fv(inverseSlot, 1, GL_FALSE, &glm::transpose(glm::inverse(V*M))[0][0]);
		glUniformMatrix4fv(matSlot1, 1, GL_FALSE, &P[0][0]);
		glUniformMatrix4fv(matSlot2, 1, GL_FALSE, &V[0][0]);
		glm::mat4 biasMatrix(
			0.5, 0.0, 0.0, 0.0,
			0.0, 0.5, 0.0, 0.0,
			0.0, 0.0, 0.5, 0.0,
			0.5, 0.5, 0.5, 1.0
			);

		glm::mat4 depthBiasMVP = biasMatrix*depthMVP;
		glUniformMatrix4fv(depthBiasSlot, 1, GL_FALSE, &depthBiasMVP[0][0]);

		glActiveTexture(GL_TEXTURE1);
		glBindTexture(GL_TEXTURE_2D, textures[3]);
		glUniform1i(glGetUniformLocation(shaderProg, "shadowMap"), 1);
		//draw
		//glDrawArrays(GL_TRIANGLES, 0, map.positions.size());
		glActiveTexture(GL_TEXTURE0);
		for(int i=0; i<numQuads; i++){
			GLint texUnitId = 0;

			if(i<2796){
				texUnitId=1;
				glBindTexture(GL_TEXTURE_2D, textures[texUnitId]);
				glUniform1i(glGetUniformLocation(shaderProg, "texUnit"), 0);
				} //This is then number that controls what texture image is used.
			else if((i>=2796)&&(i<3261)){
				texUnitId=0;
				glBindTexture(GL_TEXTURE_2D, textures[texUnitId]);
				glUniform1i(glGetUniformLocation(shaderProg, "texUnit"), 0);}
			else{
				texUnitId=2;
				glBindTexture(GL_TEXTURE_2D, textures[texUnitId]);
				glUniform1i(glGetUniformLocation(shaderProg, "texUnit"), 0);

								
			}
			glDrawArrays(GL_TRIANGLES, 6*i, 6);
			//glDrawArrays(GL_LINE_LOOP, 6*i, 6);
		}

		//cleanup
		glBindVertexArray(0);
		glUseProgram(0);
		checkGLError("display");
	}
	
	

	void reshape(int const & newWidth, int const & newHeight)
	{
		glViewport(0, 0, newWidth, newHeight);
	}
	void setTransform(glm::mat4 trans){
		this->M = trans;
	}
	void setView(glm::mat4 view){
		this->V = view;
	}
	void setProjection(glm::mat4 project){
		this->P = project;
	}



private:

	bool initialized;

	GLuint shadowMap;
	GLuint shaderProg;
	GLuint skyboxProg;
	GLuint UIProg;
	GLfloat time;
	GLuint positionBuffer;
	GLuint vertexArray;
	GLuint normalBuffer;
	GLuint texCoordBuffer;
	GLuint depthTexture;
	GLuint FramebufferName = 0;

	GLint depthMVPSlot;
	GLint depthBiasSlot;
	GLint inverseSlot;
	GLint positionSlot;
	GLint normalSlot;
	GLint texCoordSlot;
	GLint timeSlot;
	GLint matSlot1;
	GLint matSlot2;
	GLint matSlot3;
		
	glm::mat4 P;
	glm::mat4 V;
	glm::mat4 M;

	GLuint textures[4];

	void setupGlew()
	{
		glewExperimental = GL_TRUE;
		GLenum err = glewInit();
		if (GLEW_OK != err)
		{
			fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
			exit(1);
		}
		printf("Using GLEW %s\n", glewGetString(GLEW_VERSION));
	}

	bool loadOBJ(const char * path,
		std::vector < glm::vec3 > & out_vertices,
		std::vector < glm::vec2 > & out_uvs,
		std::vector < glm::vec3 > & out_normals)
	{
		std::vector< unsigned int > vertexIndices, uvIndices, normalIndices;
		std::vector< glm::vec3 > temp_vertices;
		std::vector< glm::vec2 > temp_uvs;
		std::vector< glm::vec3 > temp_normals;
		FILE * file = fopen(path, "r");
		if (file == NULL){
			printf("Impossible to open the file !\n");
			return false;
		}
		while (1){

			char lineHeader[128];
			// read the first word of the line
			int res = fscanf(file, "%s", lineHeader);
			if (res == EOF)
				break;
			if (strcmp(lineHeader, "v") == 0){
				glm::vec3 vertex;
				fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z);
				temp_vertices.push_back(vertex);
			}
			else if (strcmp(lineHeader, "vt") == 0){
				glm::vec2 uv;
				fscanf(file, "%f %f\n", &uv.x, &uv.y);
				temp_uvs.push_back(uv);
			}
			else if (strcmp(lineHeader, "vn") == 0){
				glm::vec3 normal;
				fscanf(file, "%f %f %f\n", &normal.x, &normal.y, &normal.z);
				temp_normals.push_back(normal);
			}
			else if (strcmp(lineHeader, "f") == 0){
				std::string vertex1, vertex2, vertex3;
				unsigned int vertexIndex[3], uvIndex[3], normalIndex[3];
				int matches = fscanf(file, "%d/%d/%d %d/%d/%d %d/%d/%d\n", &vertexIndex[0], &uvIndex[0], &normalIndex[0], &vertexIndex[1], &uvIndex[1], &normalIndex[1], &vertexIndex[2], &uvIndex[2], &normalIndex[2]);
				if (matches != 9){
					printf("File can't be read by our simple parser : ( Try exporting with other options\n");
					return false;
				}
				vertexIndices.push_back(vertexIndex[0]);
				vertexIndices.push_back(vertexIndex[1]);
				vertexIndices.push_back(vertexIndex[2]);
				uvIndices.push_back(uvIndex[0]);
				uvIndices.push_back(uvIndex[1]);
				uvIndices.push_back(uvIndex[2]);
				normalIndices.push_back(normalIndex[0]);
				normalIndices.push_back(normalIndex[1]);
				normalIndices.push_back(normalIndex[2]);
			}
		}
		for (unsigned int i = 0; i < vertexIndices.size(); i++){
			unsigned int vertexIndex = vertexIndices[i];
			glm::vec3 vertex = temp_vertices[vertexIndex - 1];
			out_vertices.push_back(vertex);
		}
		for (unsigned int i = 0; i < uvIndices.size(); i++){
			unsigned int uvIndex = uvIndices[i];
			glm::vec2 uv = temp_uvs[uvIndex - 1];
			out_uvs.push_back(uv);
		}
		for (unsigned int i = 0; i < normalIndices.size(); i++){
			unsigned int normalIndex = normalIndices[i];
			glm::vec3 normal = temp_normals[normalIndex - 1];
			out_normals.push_back(normal);
		}

	}
	void setupTextures()
	{

		//generate texture names
		sf::Image image;

		glGenTextures(4, textures);
		char * imagePaths[3] = {"Images/Seamless Stone wall texture.jpg", "Images/ground.jpg", "Images/plywood.jpg"};

		for(int i=0; i<3; i++)
		{
			image.LoadFromFile(imagePaths[i]);
			int texSizeX = image.GetWidth();
			int texSizeY = image.GetHeight();
			
			glBindTexture(GL_TEXTURE_2D, textures[i]);

			//control sampling
			glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST_MIPMAP_LINEAR);
			glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST_MIPMAP_NEAREST);
						
			//control boundaries
			glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
			glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);

			#define MIPMAP_ENABLED true
			#define GL30_SUPPORTED false //set this as appropriate
			#define GL14_SUPPORTED true //set this as appropriate
			if(MIPMAP_ENABLED && GL30_SUPPORTED)
			{
				glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texSizeX, texSizeY, 0, GL_RGBA, GL_UNSIGNED_BYTE, image.GetPixelsPtr());
				glGenerateMipmap(GL_TEXTURE_2D);
			}	
			else if(MIPMAP_ENABLED && GL14_SUPPORTED)
			{
				glTexParameteri(GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE);
				glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texSizeX, texSizeY, 0, GL_RGBA, GL_UNSIGNED_BYTE, image.GetPixelsPtr());
			}
			else if(MIPMAP_ENABLED)
			{
				gluBuild2DMipmaps(GL_TEXTURE_2D, GL_RGBA, texSizeX, texSizeY, GL_RGBA, GL_UNSIGNED_BYTE, image.GetPixelsPtr());
			}
			else
			{
				glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texSizeX, texSizeY, 0, GL_RGBA, GL_UNSIGNED_BYTE, image.GetPixelsPtr());
			}

			glBindTexture(GL_TEXTURE_2D, 0);
		}
		// The framebuffer, which regroups 0, 1, or more textures, and 0 or 1 depth buffer.

		glGenFramebuffers(1, &FramebufferName);
		glBindFramebuffer(GL_FRAMEBUFFER, FramebufferName);

		// Depth texture. Slower than a depth buffer, but you can sample it later in your shader


		glBindTexture(GL_TEXTURE_2D, textures[3]);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT16, 1024, 1024, 0, GL_DEPTH_COMPONENT, GL_FLOAT, 0);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

		glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, depthTexture, 0);

		glDrawBuffer(GL_NONE); // No color buffer is drawn to.

		// Always check that our framebuffer is ok
		if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)

		glBindTexture(GL_TEXTURE_2D, 0);
		checkGLError("texture");
	}

	void setupShaders()
	{
		char const * vertPath = "Shaders/simple.vert";
		char const * fragPath = "Shaders/simple.frag";
		char const * skyVertPath = "Shaders/skybox.vert";
		char const * skyFragPath = "Shaders/skybox.frag";
		char const * UIVertPath = "Shaders/ui.vert";
		char const * UIFragPath = "Shaders/ui.frag";
		char const * shadowVertPath = "Shaders/shadowMap.vert";
		char const * shadowFragPath = "Shaders/shadowMap.frag";

		shaderProg = ShaderManager::shaderFromFile(&vertPath, &fragPath, 1, 1);
		skyboxProg = ShaderManager::shaderFromFile(&skyVertPath, &skyFragPath, 1, 1);
		UIProg = ShaderManager::shaderFromFile(&UIVertPath, &UIFragPath, 1, 1);
		shadowMap = ShaderManager::shaderFromFile(&shadowVertPath, &shadowFragPath, 1, 1);

		// Find out where the shader expects the data
		positionSlot = glGetAttribLocation(shaderProg, "pos");
		normalSlot = glGetAttribLocation(shaderProg, "norm");
		texCoordSlot = glGetAttribLocation(shaderProg, "texCoord");
		matSlot1 = glGetUniformLocation(shaderProg, "P");
		matSlot2 = glGetUniformLocation(shaderProg, "V");
		matSlot3 = glGetUniformLocation(shaderProg, "M");
		inverseSlot = glGetUniformLocation(shaderProg, "inverse");
		timeSlot = glGetUniformLocation(shaderProg, "time");
		depthBiasSlot = glGetUniformLocation(shadowMap, "depth");
		depthMVPSlot = glGetUniformLocation(shadowMap, "depthMVP");
		checkGLError("shader");
	}

	void setupBuffers()
	{
		std::vector< glm::vec3 > vertices;
		std::vector< glm::vec2 > uvs;
		std::vector< glm::vec3 > normals;
		//TODO: bool res = loadOBJ("cube.obj", vertices, uvs, normals);
		glGenVertexArrays(1, &vertexArray);

		glBindVertexArray(vertexArray);
		//setup position buffer
		glGenBuffers(1, &positionBuffer);
		glBindBuffer(GL_ARRAY_BUFFER, positionBuffer);
		glBufferData(GL_ARRAY_BUFFER, map.getPositionBytes(), map.getPosition(), GL_STATIC_DRAW);
		glBindBuffer(GL_ARRAY_BUFFER, 0);

		glGenBuffers(1, &normalBuffer);
		glBindBuffer(GL_ARRAY_BUFFER, normalBuffer);
		glBufferData(GL_ARRAY_BUFFER, map.getNormalBytes(), map.getNormals(), GL_STATIC_DRAW);
		glBindBuffer(GL_ARRAY_BUFFER, 0);

		glGenBuffers(1, &texCoordBuffer);
		glBindBuffer(GL_ARRAY_BUFFER, texCoordBuffer);
		glBufferData(GL_ARRAY_BUFFER, map.getTexCoordBytes(), map.getTexCoords(), GL_STATIC_DRAW);
		glBindBuffer(GL_ARRAY_BUFFER, 0);

		glBindBuffer(GL_ARRAY_BUFFER, positionBuffer);
		glEnableVertexAttribArray(positionSlot);
		glVertexAttribPointer(positionSlot, 3, GL_FLOAT, GL_FALSE, 0,(void*) 0);

		glBindBuffer(GL_ARRAY_BUFFER, normalBuffer);
		glEnableVertexAttribArray(normalSlot);
		glVertexAttribPointer(normalSlot, 3, GL_FLOAT, GL_FALSE, 0, (void*) 0);

		glBindBuffer(GL_ARRAY_BUFFER, texCoordBuffer);
		glEnableVertexAttribArray(texCoordSlot);
		glVertexAttribPointer(texCoordSlot, 2, GL_FLOAT, GL_FALSE, 0, 0);

		glBindVertexArray(0);
		
		checkGLError("setup");
	}
	
	void rebuildBuffers()
	{
		
		glBindBuffer(GL_ARRAY_BUFFER, positionBuffer);
		glBufferSubData(GL_ARRAY_BUFFER, 0, map.getPositionBytes(), map.getPosition());
		

		glBindVertexArray(vertexArray);	
		glBindBuffer(GL_ARRAY_BUFFER, positionBuffer);
		glEnableVertexAttribArray(positionSlot);
		glVertexAttribPointer(positionSlot, 3, GL_FLOAT, GL_FALSE, 0, 0);
		
		glBindVertexArray(0);
		
		checkGLError("rebuild");
	}
};

#endif