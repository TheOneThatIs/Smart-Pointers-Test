#pragma once
#include"Drawable.h"


struct TexturedObj : Drawable {
	std::string objName;
	TexturedObj(std::string objName, std::shared_ptr<Texture> texPtr);
	~TexturedObj();
};