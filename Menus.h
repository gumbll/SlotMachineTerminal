#pragma once
#include <iostream>
#include <string>
#include "Tools.h"
#include "Interface.h"
using namespace std;

class Menus{
public:
	Menus(); // Constructor
	~Menus();// Deconstructor

	// Functions
	void MainMenu();
	void GameMenu();

private:

	bool selected = false;
	string strInput = "NULL";
	int intInput = NULL;
	enum Account {Create = 1, Load, Guest };
	enum Mode { Play = 1, Quit, Credits };
	Tools tool = Tools();
	Interface *face = new Interface();
	Effects fx = Effects();

};

