#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "SpecialEffects.h"
class Fire :
    public SpecialEffects
{
private:
    sf::Music fire;

    void initSound();
public:
    Fire();
    ~Fire();
    void playSound();
    void stopSound();


};

