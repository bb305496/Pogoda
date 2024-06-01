#include <iostream>
#include "SpecialEffects.h"
#include "Rain.h"
#include "Blow.h"
#include "Lightning.h"
#include "Fire.h"
#include "Smoke.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Pogoda");
    SpecialEffects* rainEffect = nullptr;
    SpecialEffects* blowEffect = nullptr;
    SpecialEffects* lightEffect = nullptr;
    SpecialEffects* fireEffect = nullptr;
    SpecialEffects* smokeEffect = nullptr;
    bool isRainPlaying = false;
    bool isBlowPlaying = false;
    bool isLightPlaying = false;
    bool isFirePlaying = false;
    bool isSmokePlaying = false;
    
    sf::Font font;
    font.loadFromFile("Deep.ttf");

    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(100);
    text.setFillColor(sf::Color::White);
    text.setOutlineThickness(2);
    text.setOutlineColor(sf::Color::Red);
    text.setString("      Press for : \n 1. Rain sound \n 2. Blow (off) sound \n 3. Lightning sound \n 4. Fire Sound \n 5. Dragon Sound");
    text.setPosition(540, 50);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
        {
            sf::sleep(sf::milliseconds(200));

            if (rainEffect == nullptr)
            {
                rainEffect = new Rain();
                isRainPlaying = true;
            }
            else
            {
                if (isRainPlaying)
                {
                    rainEffect->stopSound();
                    isRainPlaying = false;
                }
                else
                {
                    rainEffect->playSound();
                    isRainPlaying = true;
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
        {
            sf::sleep(sf::milliseconds(200));

            if (blowEffect == nullptr)
            {
                blowEffect = new Blow();
                isBlowPlaying = true;
            }
            else
            {
                if (isBlowPlaying)
                {
                    blowEffect->stopSound();
                    isBlowPlaying = false;
                }
                else
                {
                    blowEffect->playSound();
                    isBlowPlaying = true;
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
        {
            sf::sleep(sf::milliseconds(200));

            if (lightEffect == nullptr)
            {
                lightEffect = new Lightning();
                isLightPlaying = true;
            }
            else
            {
                if (isLightPlaying)
                {
                    lightEffect->stopSound();
                    isLightPlaying = false;
                }
                else
                {
                    lightEffect->playSound();
                    isLightPlaying = true;
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
        {
            sf::sleep(sf::milliseconds(200));

            if (fireEffect == nullptr)
            {
                fireEffect = new Fire();
                isFirePlaying = true;
            }
            else
            {
                if (isFirePlaying)
                {
                    fireEffect->stopSound();
                    isFirePlaying = false;
                }
                else
                {
                    fireEffect->playSound();
                    isFirePlaying = true;
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
        {
            sf::sleep(sf::milliseconds(200));

            if (smokeEffect == nullptr)
            {
                smokeEffect = new Smoke();
                isSmokePlaying = true;
            }
            else
            {
                if (isSmokePlaying)
                {
                    smokeEffect->stopSound();
                    isSmokePlaying = false;
                }
                else
                {
                    smokeEffect->playSound();
                    isSmokePlaying = true;
                }
            }
        }

        window.clear();
        window.draw(text);
        window.display();
    }
    delete rainEffect;
    delete blowEffect;
    delete lightEffect;
    delete fireEffect;
    delete smokeEffect;
    return 0;
}