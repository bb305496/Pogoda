#include "Blow.h"

void Blow::initSound()
{
	blow.openFromFile("Resources/Music/Blow.wav");
}

Blow::Blow()
{
	this->initSound();
	this->playSound();
}

Blow::~Blow()
{
	blow.stop();
}

void Blow::playSound()
{
	blow.setLoop(true);
	blow.play();
}

void Blow::stopSound()
{
	blow.stop();
}
