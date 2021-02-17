#include<iostream>
#include<memory>
#include<vector>
#include"TexturedObj.h"

int main() {
	std::vector<Drawable> renderQueue;

	{
		// TEXTURE CREATION
		std::shared_ptr<Texture> sprDirt	= std::make_shared < Texture> ("Files/Dirt.png");
		std::shared_ptr<Texture> sprJar		= std::make_shared<Texture> ("Files/Jar.png");

		{
			// OBJECT CREATION
			TexturedObj obj1("Dirt", sprDirt);
			{
				TexturedObj obj3("Dirt2", sprDirt);
			}
			TexturedObj obj2("Jar", sprJar);

			renderQueue.push_back(obj1);
			renderQueue.push_back(obj2);

			// RENDER
			for (int i = 0; i < renderQueue.size(); i++)
				renderQueue[i].render();
		}
	}
}