#pragma once

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"


class Movement : public sf::Window, public sf::Shape
{
public:
	static void movementCharacter();
};

