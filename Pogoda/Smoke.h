#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "SpecialEffects.h"
class Smoke :
    public SpecialEffects
{
private:
    sf::Music smoke;

    void initSound();
public:
    Smoke();
    ~Smoke();
    void playSound();
    void stopSound();
};

