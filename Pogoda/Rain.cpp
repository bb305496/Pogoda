#include "Rain.h"

void Rain::initSound()
{
	rain.openFromFile("Resources/Music/Rain.wav");
}

Rain::Rain()
{
	this->initSound();
	this->playSound();
}

Rain::~Rain()
{
	rain.stop();
}

void Rain::playSound()
{
	rain.setLoop(true);
	rain.play();
}

void Rain::stopSound()
{
	rain.stop();
}


