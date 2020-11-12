#include "Menus.h"
#include "Tools.h"
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;


void Menus::MainMenu() {
	
	// First Instance of entering the menu the player will receive this menu.
	// This menu allows a user to create accounts etc
	if (selected != true) {
		fx.BannerPrint('a');
		cout << "Welcome to Slots!\n\n";

		cout << "Please select one of the following options: "
			<< "\n\t 1. Create Account "
			<< "\n\t 2. Load Account "
			<< "\n\t 3. Guest Account "
			<< "\n\n Selection: ";
		
		cin >> strInput;

		try { intInput = stoi(strInput); }
		catch (exception ex) { /*This will automatically result in the application going to the switch default case*/ }

		switch (intInput) {
		case Create:
			selected = true;
			face->ProfileCount();

			break;
		case Load:
			selected = true;
			face->LoadGame();
			Sleep(2000);			
			
			break;
		case Guest:
			selected = true;
			face->PlayGuest();

			break;
		default:
			Sleep(2000);
			tool.InputError('a');
			MainMenu();
			break;
		}	
	}
	GameMenu();
}

// GameMenu is where users select what they would like to do.

void Menus::GameMenu() {
	strInput.clear();
	tool.ClearScreen();
	fx.BannerPrint('m');

	cout << "\n\nWhat would you like to do?\n" 
		<< "1. Play Slots\n" 
		<< "2. Quit Game\n" 
		<< "3. Check Balance\n" 
		<< "\n\nInput: ";

	cin >> strInput;

	try { intInput = stoi(strInput); }
	catch (exception ex) { /*This will automatically result in the application going to the switch default case*/ }
	enum exit {Yes = 1, No};
	
	
	try { // this try-catch is here due to it not being allowed inside the switch statement
		switch (intInput){
		case Play:
			face->StartGame();
			break;
		case Quit:
			cout << "\nWould you like to save your game?\n 1. Yes\n 2. No\n Choice: ";
			cin >> strInput;

			intInput = stoi(strInput); 	

			switch (intInput){
			case Yes:
				face->SaveGame();
				tool.ClearScreen();
				tool.CloseApplication();
			case No:
				tool.ClearScreen();
				tool.CloseApplication();
			default:
				face->SaveGame();
				break;
			}
			tool.ClearScreen();
			tool.CloseApplication();

		case Credits:
			tool.ClearScreen();
			face->CheckBalance('y');
			Sleep(2000);	
			cout << "Type anything followed by 'Enter' to continue..";
			cin >> strInput;
			strInput.clear();
			GameMenu();
			break;

		default:
			tool.InputError('a');
			GameMenu();
			break;
		}
	}
	catch (exception ex) { /* if invalid input force user to save game */}
}


Menus::Menus() {
}

Menus::~Menus() {
	delete face;
	face = NULL;
}