#include"Drawable.h"
#include<iostream>


Drawable::Drawable() {

}

void Drawable::render() {
	std::cout << "Rendering: " << texture->filepath << std::endl;
}