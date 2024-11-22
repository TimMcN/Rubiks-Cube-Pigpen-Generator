#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<vector>
#include<iostream>


int main()
{
    sf::RenderWindow window1(sf::VideoMode(1600,1000), "Unwrapped");
    sf::Color bg_color = sf::Color{200,200,200};
    window1.clear(sf::Color::Cyan);
    
    std::vector<sf::RectangleShape> face;
    float posx_base = 0;
    float posx =0;
    float posy= 0;
    std::vector<sf::Color> face_colors;
    face_colors.push_back(sf::Color::White);
    face_colors.push_back(sf::Color::Red);
    face_colors.push_back(sf::Color::Yellow);
    face_colors.push_back(sf::Color::Green);
    face_colors.push_back(sf::Color::Blue);
    for (int i=0; i<5; i++)
    {
        posx_base = 60*3*(i);
        sf::Color color = face_colors.back();
        face_colors.pop_back();
        posy=0;
        for (int j = 0; j<3; j++)
        {
            posx=posx_base;
            for (int k=0; k<3; k++){
            sf::RectangleShape shape(sf::Vector2f(50, 50));
            shape.setPosition(posx, posy);
            shape.setFillColor(color);
            face.push_back(shape);
            posx+=60;
            }
            posy+=60;
            
        }
        
    }
    sf::RectangleShape shape2(sf::Vector2f(50, 50));
    window1.clear(bg_color);
    for (int i=0; i<face.size(); i++){
        window1.draw(face[i]);
    }
    window1.display();
    while(window1.isOpen())
    {
        
        sf::Event event;
    
        while (window1.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window1.close();
           
                }
            }
        }