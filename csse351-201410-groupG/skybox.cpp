#include "skybox.h"

enum{SKY_LEFT=0, SKY_BACK, SKY_RIGHT, SKY_FRONT, SKY_TOP, SKY_BOTTOM};
unsigned int skybox[6];

unsigned int loadTexture(const char* filename){
	unsigned int num;
	glGenTextures(1, &num);
	sf::Image image;
	image.LoadFromFile(filename);
	int texSizeX = image.GetWidth();
	int texSizeY = image.GetHeight();
	glBindTexture(GL_TEXTURE_2D, num);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texSizeX, texSizeY, 0, GL_RGBA, GL_UNSIGNED_BYTE, image.GetPixelsPtr());
	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, image->w, image->h, 0, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, image->pixels);
	return num;
}

void initSkybox(){
	skybox[SKY_LEFT] = loadTexture("Images/sky30/leftsh.jpg");
	skybox[SKY_BACK] = loadTexture("Images/sky30/backsh.jpg");
	skybox[SKY_RIGHT] = loadTexture("Images/sky30/rightsh.jpg");
	skybox[SKY_FRONT] = loadTexture("Images/sky30/frontsh.jpg");
	skybox[SKY_TOP] = loadTexture("Images/sky30/topsh.jpg");
	skybox[SKY_BOTTOM] = loadTexture("Images/sky30/botsh.jpg");
}

void drawSkybox(float size){
	glDisable(GL_LIGHTING);
	glDisable(GL_DEPTH_TEST);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D,skybox[SKY_BACK]);
	glBegin(GL_QUADS);
	//back face
	glTexCoord2f(0,0);
	glVertex3f(size/2,size/2,size/2);
	glTexCoord2f(1,0);
	glVertex3f(-size/2,size/2,size/2);
	glTexCoord2f(1,1);
	glVertex3f(-size/2,-size/2,size/2);
	glTexCoord2f(0,1);
	glVertex3f(size/2,-size/2,size/2);
	glEnd();

	//left face
	glBindTexture(GL_TEXTURE_2D,skybox[SKY_LEFT]);
	glBegin(GL_QUADS);
	glTexCoord2f(0,0);
	glVertex3f(-size/2,size/2,size/2);
	glTexCoord2f(1,0);
	glVertex3f(-size/2,size/2,-size/2);
	glTexCoord2f(1,1);
	glVertex3f(-size/2,-size/2,-size/2);
	glTexCoord2f(0,1);
	glVertex3f(-size/2,-size/2,size/2);
	glEnd();
	
	//front face
	glBindTexture(GL_TEXTURE_2D,skybox[SKY_FRONT]);
	glBegin(GL_QUADS);
	glTexCoord2f(1,0);
	glVertex3f(size/2,size/2,-size/2);
	glTexCoord2f(0,0);
	glVertex3f(-size/2,size/2,-size/2);
	glTexCoord2f(0,1);
	glVertex3f(-size/2,-size/2,-size/2);
	glTexCoord2f(1,1);
	glVertex3f(size/2,-size/2,-size/2);
	glEnd();
	
	//right face
	glBindTexture(GL_TEXTURE_2D,skybox[SKY_RIGHT]);
	glBegin(GL_QUADS);
	glTexCoord2f(0,0);
	glVertex3f(size/2,size/2,-size/2);
	glTexCoord2f(1,0);
	glVertex3f(size/2,size/2,size/2);
	glTexCoord2f(1,1);
	glVertex3f(size/2,-size/2,size/2);
	glTexCoord2f(0,1);
	glVertex3f(size/2,-size/2,-size/2);
	glEnd();
	
	//top face
	glBindTexture(GL_TEXTURE_2D,skybox[SKY_TOP]);
	glBegin(GL_QUADS);
	glTexCoord2f(1,0);
	glVertex3f(size/2,size/2,size/2);
	glTexCoord2f(0,0);
	glVertex3f(-size/2,size/2,size/2);
	glTexCoord2f(0,1);
	glVertex3f(-size/2,size/2,-size/2);
	glTexCoord2f(1,1);
	glVertex3f(size/2,size/2,-size/2);
	glEnd();

	//bottom face
	glBindTexture(GL_TEXTURE_2D,skybox[SKY_BOTTOM]);
	glBegin(GL_QUADS);
	glTexCoord2f(1,1);
	glVertex3f(size/2,-size/2,size/2);
	glTexCoord2f(0,1);
	glVertex3f(-size/2,-size/2,size/2);
	glTexCoord2f(0,0);
	glVertex3f(-size/2,-size/2,-size/2);
	glTexCoord2f(1,0);
	glVertex3f(size/2,-size/2,-size/2);
	glEnd();

	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glDisable(GL_TEXTURE_2D);
}

void killSkybox(){
	glDeleteTextures(6, &skybox[0]);
}

skybox::skybox(void)
{
}

skybox::~skybox(void)
{
}
