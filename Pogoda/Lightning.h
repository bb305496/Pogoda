#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "SpecialEffects.h"
class Lightning :
    public SpecialEffects
{
private:
    sf::Music light;

    void initSound();
public:
    Lightning();
    ~Lightning();
    void playSound();
    void stopSound();


};

