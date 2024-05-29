#pragma once
#include "SpecialEffects.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
class Rain :
    public SpecialEffects
{
private:
    sf::Music rain;

    void initSound();
public:
    Rain();
    ~Rain();
    void playSound();
    void stopSound();
};

