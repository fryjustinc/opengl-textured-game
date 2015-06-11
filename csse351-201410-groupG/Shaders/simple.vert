#version 130
uniform mat4 M;
uniform mat4 P;
uniform mat4 V;
uniform mat4 inverse;
uniform float time;
uniform mat4 DepthBiasMVP
layout (location = 0) in vec3 pos;
layout (location = 1) in vec3 norm;
out vec3 vertex;
out vec3 normal;
out vec3 eye;
out vec4 ShadowCoord
layout (location = 2) in vec2 texCoord;
out vec2 texMapping;


void main()
{	
mat3 NormalMatrix = mat3(inverse);
vertex = vec3(mat3(V*M) * pos);
normal = normalize(NormalMatrix * norm);
eye = -normalize(vertex);
texMapping = texCoord;
ShadowCoord = DepthBiasMVP * vec4(pos,1);
gl_Position = P*V*vec4(pos,1);
}
