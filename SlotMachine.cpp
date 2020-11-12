/*
* Application Name: Virtual Slots
* Description: This app allows you to play a virtual slot machine. It offer functionallity such as save game, and create profile.
*
* Application Created By: Lachlan Ashton
* Student ID: 00327153T
* Student Email: lachlan.ashton@mds.torrens.edu.au
*/

#include "windows.h"
#include "Menus.h"


int main(){

	system("Color 2");
	Menus *menu = new Menus(); // allocate menu onto the heap (allocate memory)
	
	while (true) { menu->MainMenu(); } // always default back to memory unless program exits

	
	delete menu; // delete object off the heap (deallocate memory)
	menu = NULL; // ensure nothing is allocated to the object pointer
	Sleep(1000);
	return 0;

}

