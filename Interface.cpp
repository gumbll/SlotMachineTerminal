#include "Interface.h"
#include "Tools.h"
#include "Players.h"
#include "Mechanics.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


// Create a new game profile
void Interface::NewGame() {

	tool.ClearScreen();
	ofstream data;

	data.open("data.txt", ios_base::app);
	if (!data) {
		cout << "You cannot create an account at this time!\n Returning to main menu";
		cout << "."; Sleep(150); 
		cout << "."; Sleep(150); 
		cout << "."; Sleep(150); 
		cout << "."; Sleep(150); 
		cout << "."; Sleep(150); 
		cout << "."; Sleep(150);
	}
	else {

		cout << "Please enter your preffered username: ";

		cin >> strInput;
		player->SetName(strInput);
		data << strInput<<"\n";
		data << this->player->GetMoney();
		data.close();
	}
	
}

// Load a previous game file
void Interface::LoadGame() {
	tool.ClearScreen();
	
	// if a number greater than what is stored in the array currently is entered it will result in a crash. this needs to be fixed!

	int i = 0;
	int j = 1;
	int numProf = 1;
	string user = "";
	
	// Store the money and name of each profile in this 2d vector
	vector<vector<string>> profile(10, vector<string>(10));

	fstream data;
	string dFile = "data.txt";

	data.open(dFile.c_str());
	if (!data) {
		cout << "Accounts could not be found at this time\n";
	}
	else {
		cout << "Please select a save game profile from the list below: \n";
		while (!data.eof()) {
			if (j == 1) {

				data >> profile[i][0];
				cout << numProf << ". " << profile[i][0] << "\n";
				i++;
				j++;
				numProf++;

			}
			else if(j == 2) {
				data >> profile[i][1];
				j = 1;
			}	
		}
		data.close();
		cout << "Please select the profile: ";
		cin >> strInput;
		try { intInput = stoi(strInput); }
		catch (exception ex) { tool.InputError('a'); Sleep(2000); }

		if (intInput > 0 && intInput <= numProf) {
			this->player->SetName(profile[intInput][0]);
			this->player->SetMoney(stoi(profile[intInput][1]));
			cout << "\nProfile has been set!\n";

		}
		else {
			tool.InputError('a'); Sleep(2000); LoadGame();
		}
	}
}

//Counts how many profiles currently exist and limits it to a max of 10
void Interface::ProfileCount() {
	int current = 0;
	fstream data;
	string dFile = "count.txt";
	string line;

	data.open(dFile.c_str());
	if (!data) {
		cout << "A profile could not be created at this time";
	}
	else {
		while (!data.eof()) {
			data >> line;
			current++;
		}
		data.close();
		if (current >= MAX_SAVES) {
			cout << "A profile could not be created at this time";
		}
		else {
			data.open(dFile.c_str(), fstream::app);
			data << "1\n";
			data.close();
			NewGame();
		}
	}
}


void Interface::PlayGuest() {
	tool.ClearScreen();
	player->SetName("Guest");
}


void Interface::SaveGame() {
	int i = 0;
	int j = 1;
	int numProf = 1;
	string line = "";


	vector<vector<string>> profile(10, vector<string>(10));

	fstream data;
	string dFile = "data.txt";

	data.open(dFile.c_str());
	if (!data) {
		cout << "Accounts could not be found at this time\n";
	}
	else {
		cout << "Please select a save game profile to save over from the list below: \n";
		while (!data.eof()) {
			if (j == 1) {

				data >> profile[i][0];
				cout << numProf << ". " << profile[i][0] << "\n";
				i++;
				j++;
				numProf++;

			}
			else if (j == 2) {
				data >> profile[i][1];
				j = 1;
			}
		}
		data.close();

		strInput.clear();
		cin >> strInput;
		intInput = stoi(strInput);

		try { intInput = stoi(strInput); }
		catch (exception ex) { tool.InputError('a'); }

		switch (intInput) {
		case 1:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 2:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 3:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 4:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 5:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 6:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 7:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 8:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 9:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		case 10:
			profile[i][1] = this->player->GetMoney();
			profile[i][0] = this->player->GetName();
			break;
		default:
			tool.InputError('a');
			Sleep(1000);
			SaveGame();

		}
		for (int i = 0; i < 10; i++) {
			data.open("data.txt");
			data << profile[i][1];
			data << profile[i][0];
		}
		data.close();
	}
}


void Interface::StartGame() {
	system("Color 1");
	int money = 0;
	int* moneyPtr = &money;

	tool.ClearScreen();
	CheckBalance('n');
	fx.BannerPrint('p');

	cout << "\n\nHow much would you like to bet? \n"
		<< "Amount: ";
	cin >> strInput;

	tool.ClearScreen();


	cout << "\nYour Current Bet: " << strInput << endl;


	try { intInput = stoi(strInput); }
	catch (exception ex) { tool.InputError('b'); StartGame(); }

	// Remove bet amount from account
	if (player->GetMoney() >= intInput && intInput >= 1) {
		Update(0, intInput);
		mech.Spin(intInput, moneyPtr);
	}
	else { tool.InputError('c'); StartGame(); }


	// Add winnings to the players account
	if (money > 0) {
		fx.BannerPrint('w');
		for (int i = 0; i < 7; i++) {
			system("Color 1");
			Sleep(100);
			system("Color C");
			Sleep(100);
			system("Color D");
			Sleep(100);
			system("Color F");

		}
		cout << "\nYou have won: $" << money << endl;
		Update(money, 0);
		CheckBalance('n');
		Sleep(2000);
	}
	else {
		system("Color 4");
		fx.BannerPrint('l');
		cout << "\nYou have lost: $" << intInput << endl;
		CheckBalance('n');
		
		Sleep(2000);
	}
	ContinueGame();
}


void Interface::CheckBalance(char menu) {
	
	cout << "\nYour current balance is: $" << player->GetMoney() << "\n\n";

}


void Interface::Update(int add, int minus) {
	player->AddMoney(add);
	player->RemoveMoney(minus);
}


void Interface::ContinueGame() {
	strInput.clear();
	cout << "Would you like to play again? \n"
		<< "1. Yes\n"
		<< "2. No \n"
		<< "Answer: ";

	cin >> strInput;

	try { intInput = stoi(strInput); }
	catch (exception ex) { /*This will automatically result in the application going to the switch default case*/ }

	switch (intInput) {
	case this->tool.Yes:
		StartGame();
		break;
	case this->tool.No:
		break;
	default:
		tool.InputError('a');
		tool.ClearScreen();
		break;
	}
}










Interface::Interface() {

}


Interface::~Interface() {
	delete player;
	player = NULL;
}
