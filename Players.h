#pragma once
#include <string>
using namespace std;

class Players{
public:
	Players(string name);
	~Players();

	int GetMoney();
	void SetMoney(int money);
	string GetName();
	void SetName(string name);
	void AddMoney(int value);
	void RemoveMoney(int value);

private:
	int money = 2000;
	string name = "Default";


};

