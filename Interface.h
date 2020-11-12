#pragma once
#include "windows.h"
#include "Tools.h"
#include "Players.h"
#include "Mechanics.h"
#include <string>
using namespace std;

class Interface{
public:
	Interface();
	~Interface();


	void ProfileCount();
	void LoadGame();
	void PlayGuest();
	void SaveGame();

	void StartGame();
	void CheckBalance(char menu);

private:
	void NewGame();
	void ContinueGame();
	const int MAX_SAVES = 10;
	void Update(int add, int minus);
	int intInput = NULL;
	string strInput = "";
	Players *player = new Players("Default");
	Tools tool = Tools();
	Mechanics mech = Mechanics();
	Effects fx = Effects();
};

