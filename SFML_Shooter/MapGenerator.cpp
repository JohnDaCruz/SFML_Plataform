#include "MapGenerator.h"

MapGenerator::MapGenerator() {
    mapShape.setSize(sf::Vector2f(100.f, 100.f));
    mapShape.setFillColor(sf::Color::Green);
    mapShape.setPosition(400.f, 300.f);
}
