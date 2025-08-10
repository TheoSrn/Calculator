#include "graph.hpp"
#include "../main.hpp"
#include "../add/addition.hpp"

sf::RectangleShape createCenteredRectangle(const sf::Vector2u& windowSize, float width, float height) {
    // Création du rectangle
    sf::RectangleShape rectangle(sf::Vector2f(width, height));
    rectangle.setFillColor(sf::Color(80, 80, 80));

    // Calculer la position pour centrer le rectangle
    float posX = (windowSize.x - width) / 2;
    float posY = (windowSize.y - height) / 2;
    rectangle.setPosition(posX, posY);

    return rectangle;
}

void drawCalculator(sf::RenderWindow &window) {
    sf::Vector2u windowSize = window.getSize();

    // Définir les tailles maximales et minimales
    const float maxWidth = 500.0f;
    const float maxHeight = 700.0f;
    const float minWidth = 200.0f;
    const float minHeight = 300.0f;

    // Calculer la taille du rectangle en pourcentage de la taille de la fenetre
    float bodyWidth = max(minWidth, min(maxWidth, windowSize.x * 0.65f));
    float bodyHeight = max(minHeight, min(maxHeight, windowSize.y * 0.85f));

    // Créer et positionner le rectangle
    auto calculatorBody = createCenteredRectangle(windowSize, bodyWidth, bodyHeight);

    window.draw(calculatorBody);
}