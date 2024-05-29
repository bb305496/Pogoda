#pragma once
#include "SpecialEffects.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
class Blow :
    public SpecialEffects
{
private:
    sf::Music blow;

    void initSound();
public:
    Blow();
    ~Blow();
    void playSound();
    void stopSound();

};

