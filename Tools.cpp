#include "Tools.h"
#include <iostream>
#include <windows.h>
using namespace std;


// Quit game, unload from memory
int Tools::CloseApplication() {

	cout << flush << "Thanks for playing, goodbye!" << endl;
	// Shutting Down Load Bar Animation??
	Sleep(2000);
	exit(0);
}

// Clears the terminal console of any text
void Tools::ClearScreen() {

	//cout << string(100, '\n'); // this unused code is an alternative way to somewhat clear the screen.
	system("cls"); // this is not always the safest method to clear the screen but there arent many other options.
}


void Tools::InputError(char err) {

	// Error Type 'a' is where a user hasnt input a valid switch case from a menu.
	if (err == 'a') { cout << "\nPlease select one of the numbers from the list above!\n"; Sleep(2000); ClearScreen();};
	
	// Error Type 'b' is where a user hasnt input a valid integer number.
	if (err == 'b') { cout << "\nPlease enter a non-decimal integer value!\n"; Sleep(2000); ClearScreen();};

	// Error Type 'c' is where a user doesnt have the correct amount of money for the be they placed.
	if (err == 'c') { cout << "\nYour balance isnt high enough to place a bet of that amount!\n"; Sleep(2000); ClearScreen(); };

}

Tools::Tools() {

}


Tools::~Tools() {

}