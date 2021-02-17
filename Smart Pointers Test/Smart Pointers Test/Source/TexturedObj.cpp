#include"TexturedObj.h"
#include<iostream>

TexturedObj::TexturedObj(std::string objName, std::shared_ptr<Texture> texPtr) {
	texture = texPtr;
	this->objName = objName;
	std::cout << "Constructor for TexturedObj with name: " << objName << std::endl;
}

TexturedObj::~TexturedObj() {
	std::cout << "Destructor for TexturedObj with name: " << objName << std::endl;
}