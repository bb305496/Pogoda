#include "Lightning.h"

void Lightning::initSound()
{
	light.openFromFile("Resources/Music/Light.wav");
}

Lightning::Lightning()
{
	this->initSound();
	this->playSound();
}

Lightning::~Lightning()
{
	light.stop();
}

void Lightning::playSound()
{
	light.setLoop(true);
	light.play();
}

void Lightning::stopSound()
{
	light.stop();
}
