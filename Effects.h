#pragma once
#include "Tools.h"
#include <string>
using namespace std;

class Effects{
public:

	void GetSelected(int num1, int num2, int num3);// this takes in the number that needs to be displayed on the slot machine
	void BannerPrint(char ban); // Banner Home = 'h', Banner Slot Machine = 'g' 

private:
	// Each array represents one wheel and holds the line output for each number
	// There are 8 lines assigned to each number. The array has 10 positions just because it can? 
	string wheelOne[10]{ "","", "", "", "", "", "", "", "", "" };
	string wheelTwo[10]{ "","", "", "", "", "", "", "", "", "" };
	string wheelThree[10]{ "","", "", "", "", "", "", "", "", "" };

	//These pointers are kind of pointless, but they prove i can use pointers, right?
	string* wheelOnePtr = wheelOne;
	string * wheelTwoPtr = wheelTwo;
	string* wheelThreePtr = wheelThree;

	// These are the functions that hold each of the numbers that will be represented on the wheel
	// They hold three of each number accross a switch statement that assigns depending on the posision that it needs to be on the slot machine
	void GetOne(int num);
	void GetTwo(int num);
	void GetThree(int num);
	void GetFour(int num);
	void GetFive(int num);
	void GetSix(int num);
	void GetSeven(int num);
	string GetSeperator();

	//this enum holds all of the ansi colour codes that can be using in the program
	enum class ansi_colour_code : int {
		black = 30,
		red = 31,
		green = 32,
		yellow = 33,
		blue = 34,
		magenta = 35,
		cyan = 36,
		white = 37,
		bright_black = 90,
		bright_red = 91,
		bright_green = 92,
		bright_yellow = 93,
		bright_blue = 94,
		bright_magenta = 95,
		bright_cyan = 96,
		bright_white = 97,
	};

	// these are used to assign the number to each wheel
	enum Number { nOne = 1, nTwo, nThree, nFour, nFive, nSix, nSeven };
	enum Wheel { wOne = 1, wTwo, wThree};

	// Declaring a new instance of object
	Tools tool = Tools();
};

