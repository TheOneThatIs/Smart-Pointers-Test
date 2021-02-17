#pragma once
#include<memory>
#include"Texture.h"

struct Drawable {
	std::shared_ptr<Texture> texture;
	int x, y;

	Drawable();
	void render();
};