#pragma once
class SpecialEffects
{
private:

public:
	SpecialEffects();
	virtual ~SpecialEffects();

	virtual void playSound() = 0;
	virtual void stopSound() = 0;
};

