#pragma once

#include <SFML/Graphics.hpp>
#include "Movement.h"

class Player{
public:
    Player(); 

    //virtual std::size_t getPointCount();
    //virtual sf::Vector2f getPoint(std::size_t index);
    void draw(sf::RenderWindow& window);

    sf::RectangleShape player;
};
