#include <iostream>
#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include "MapGenerator.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    MapGenerator mapGen;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(mapGen);

        window.display();
    }

    return EXIT_SUCCESS;
}
