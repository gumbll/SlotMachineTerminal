#pragma once
#include "Tools.h"
#include "Effects.h"
class Mechanics{
public:
	void Spin(int bet, int *money);

private:
	void CalculateWin(int spin1, int spin2, int spin3, int bet, int *money);
	int MAX = 7;
	Tools tool = Tools();
	Effects eff = Effects();
};

