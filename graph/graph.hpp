#pragma once

#include <SFML/Graphics.hpp>
#include <algorithm>

void my_window();
void drawCalculator(sf::RenderWindow &window);
sf::RectangleShape screen(sf::RectangleShape &body);
sf::RectangleShape createCenteredRectangle(float width, float height, sf::Color color);