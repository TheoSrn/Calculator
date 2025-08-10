#include "graph.hpp"
#include "../main.hpp"

sf::RectangleShape createCenteredRectangle(float width, float height, sf::Color color) {
    // Création du rectangle
    sf::RectangleShape rectangle(sf::Vector2f(width, height));
    rectangle.setFillColor(color);

    return rectangle;
}

void body(sf::RenderWindow &window) {
    sf::Vector2u windowSize = window.getSize();
    sf::Color color_beige(80, 80, 80);

    // Définir les tailles maximales et minimales du body
    const float maxWidth = 500.0f;
    const float maxHeight = 700.0f;
    const float minWidth = 200.0f;
    const float minHeight = 300.0f;

    // Calculer la taille du rectangle en pourcentage de la taille de la fenetre
    float bodyWidth = max(minWidth, min(maxWidth, windowSize.x * 0.65f));
    float bodyHeight = max(minHeight, min(maxHeight, windowSize.y * 0.85f));

    // Créer et positionner le rectangle body
    auto calculatorBody = createCenteredRectangle(bodyWidth, bodyHeight, color_beige);

    // Centrer le rectangle body dans la fenetre
    calculatorBody.setPosition((windowSize.x - bodyWidth) / 2, (windowSize.y - bodyHeight) / 2);

    // Créer le rectangle screen
    auto calculatorScreen = screen(calculatorBody);

    // Dessiner les rectangles
    window.draw(calculatorBody);
    window.draw(calculatorScreen);
}

void drawCalculator(sf::RenderWindow &window) {
    body(window);
}