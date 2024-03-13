#include <iostream>
#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include "MapGenerator.h"
#include "Movement.h"
#include "Player.h"
#include "Globais.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(Globais::CtX, Globais::CtY), "SFML window");
    window.setFramerateLimit(60);

    Player player;
    Movement movement(player);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        };

        movement.movementCharacter(window);

        window.clear();

        // Desenha o jogador
        player.draw(window);

        window.display();
    }

    return EXIT_SUCCESS;
}
