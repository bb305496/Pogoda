#include "Smoke.h"

void Smoke::initSound()
{
	smoke.openFromFile("Resources/Music/Smok.wav");
}

Smoke::Smoke()
{
	this->initSound();
	this->playSound();
}

Smoke::~Smoke()
{
	smoke.stop();
}

void Smoke::playSound()
{
	smoke.setLoop(true);
	smoke.play();
}

void Smoke::stopSound()
{
	smoke.stop();
}
