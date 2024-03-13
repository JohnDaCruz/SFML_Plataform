#include "Player.h"
#include "Globais.h"
#include <iostream>

Player::Player() {
    player.setSize(sf::Vector2f(50.0f, 50.0f));
    player.setFillColor(sf::Color::Green);
    player.setPosition(100.0f, 100.0f);
};

//std::size_t getPointCount(){
//    return 0;
//};
//
//sf::Vector2f getPoint(std::size_t index){
//    return sf::Vector2f();
//};

void Player::draw(sf::RenderWindow& window)
{
    window.draw(player);
}
