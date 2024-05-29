#include "Fire.h"

void Fire::initSound()
{
	fire.openFromFile("Resources/Music/Fire.wav");
}

Fire::Fire()
{
	this->initSound();
	this->playSound();
}

Fire::~Fire()
{
	fire.stop();
}

void Fire::playSound()
{
	fire.setLoop(true);
	fire.play();
}

void Fire::stopSound()
{
	fire.stop();
}
