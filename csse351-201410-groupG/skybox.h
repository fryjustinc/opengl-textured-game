#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "GLHelper.h"

void drawSkybox(float size);
void initSkybox();
void killSkybox();
unsigned int loadTexture(const char*);


class skybox
{
public:
	skybox(void);
	~skybox(void);
};
