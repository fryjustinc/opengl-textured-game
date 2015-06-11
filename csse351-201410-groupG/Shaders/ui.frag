#version 130
in vec3 vertex;
in vec3 normal;
in vec3 eye;

uniform sampler2D texUnit;

in vec2 texMapping;

void main()
{
	vec3 L = normalize(vec3(4,4,4)-vertex);
	vec3 E = normalize(-vertex);
	vec3 R = normalize(-reflect(L, normal));
	vec4 Iamb =vec4(0.1f,0.1f,0.1f,0.1f);
	vec4 diffuse = vec4(0.3f,0.3f,0.3f,0.3f)*max(dot(normal,L),0.0);
	diffuse = clamp(diffuse, 0.0, 1.0);
	vec4 specular = vec4(1.0f,1.0f,1.0f,1.0f) * pow(max(dot(R, E),0.0), 200.0);
	specular = clamp(specular, 0.0,1.0);
	gl_FragColor = Iamb + diffuse + specular + texture(texUnit, texMapping);
	//gl_FragColor = vec4(texMapping, 0, 0); 
}