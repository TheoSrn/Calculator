#include "graph.hpp"
#include "../main.hpp"

void my_window() {
    // Création de la window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Calculator");
    window.setVerticalSyncEnabled(false);

    // Background beige
     sf::Color beige(245, 245, 220);

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                //Event de fermeture de fenetre
                window.close();
            else if (event.type == sf::Event::Resized) {
                // Event de reSize
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
            }
        }

        window.clear(beige);
        drawCalculator(window);
        window.display();
    }
}