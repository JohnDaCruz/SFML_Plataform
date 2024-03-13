#pragma once

#include "Player.h"
#include <SFML/Graphics.hpp>

class Movement {
public:
    Movement(Player& player);

    void movementCharacter(sf::RenderWindow& window);

private:
    Player& player;
    float movementSpeed = 5.0f;
};