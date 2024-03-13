#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class MapGenerator : public sf::Shape, public sf::Drawable, public sf::Window {
public:
    MapGenerator(); // Construtor

    virtual std::size_t getPointCount() const override {
        return 0;
    };

    virtual sf::Vector2f getPoint(std::size_t index) const override {
        return sf::Vector2f();
    };

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override {
        target.draw(mapShape, states);
    };

private:
    sf::RectangleShape mapShape;
    sf::Color mapColor;
};
