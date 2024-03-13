#include <iostream>
#include "Movement.h"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Player.h"

Movement::Movement(Player& player) : player(player) {}

void Movement::movementCharacter(sf::RenderWindow& window) {
    // Verifica as entradas do teclado e movimenta o jogador
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        player.player.move(-movementSpeed, 0.0f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        player.player.move(movementSpeed, 0.0f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        player.player.move(0.0f, -movementSpeed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        player.player.move(0.0f, movementSpeed);
    }
};