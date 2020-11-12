#include "Mechanics.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> 
#include "Tools.h"
using namespace std;


void Mechanics::Spin(int bet, int *money) {
    srand(time(0) % 50);
    int spinner[3]{ 0, 0, 0 };

    system("Color 5");
    //spins the wheel 65 times for a rolling effect
    for (int i = 0; i < 25; i++) {
        // Generates three random numbers
        for (int j = 0; j < 3; j++) {
            spinner[j] = rand() % MAX;
            if (spinner[j] <= 1 ) { spinner[j]++; }
        }

        Sleep(150);
        eff.GetSelected(spinner[0], spinner[1], spinner[2]);
        //cout << "\r" << spinner[0] << "|" << spinner[1] << "|" << spinner[2] << flush;
    }
    cout << "\n\n";

    CalculateWin(spinner[0], spinner[1], spinner[2], bet, money);
    

}



void Mechanics::CalculateWin(int spin1, int spin2, int spin3, int bet, int *money) {
    int winnings = 0;

    //if all three numbers are 7, then award 10x bet amount
    if (spin1 == 7 && spin2 == 7 && spin3 == 7) {
        winnings = bet * 10;
    }
    //if any three number are the same (not 7s), then award 5x bet amount
    else if (spin1 == spin2 && spin1 == spin3) {
        winnings = bet * 5;
    }
    //if two out of three numbers are the same, then award 3x bet amount
    else if (spin1 == spin2 || spin2 == spin3 || spin1 == spin3) {
        winnings = bet * 3;
    }
    // if none of the above the player loses their bet and win equals 0
    else {
        winnings = 0;
    }

    *money = winnings;
 
}