#include "graph.hpp"
#include "../main.hpp"

sf::RectangleShape screen(sf::RectangleShape &body) {
    sf::Vector2f bodySize = body.getSize();
    sf::Color color_black(0, 0, 0);

    // Calculer la taille du rectangle screen en pourcentage de la taille du body
    float screenWidth = bodySize.x * 0.90f;
    float screenHeight = bodySize.y * 0.2f;

    // Créer et positionner le rectangle screen
    auto calculatorScreen = createCenteredRectangle(screenWidth, screenHeight, color_black);

    // Centrer le rectangle dans le body
    sf::FloatRect bodyBounds = body.getGlobalBounds();
    calculatorScreen.setPosition(bodyBounds.left + (bodyBounds.width - screenWidth) / 2, bodyBounds.top + 10.0f);

    return calculatorScreen;
}