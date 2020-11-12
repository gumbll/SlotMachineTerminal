#include "Effects.h"
#include "windows.h"
#include <string>
#include <iostream>
using namespace std;

void Effects::BannerPrint(char banner) {
    string pslots[10]{ "","", "", "", "", "", "", "", "", "" };

    if (banner == 'a') {

        pslots[0] = "88888888ba  88                            ad88888ba  88                               ";
        pslots[1] = "88      \"8b 88                           d8\"     \"8b 88              ,d               ";
        pslots[2] = "88      ,8P 88                           Y8,         88              88               ";
        pslots[3] = "88aaaaaa8P' 88 ,adPPYYba, 8b       d8    `Y8aaaaa,   88  ,adPPYba, MM88MMM ,adPPYba,  ";
        pslots[4] = "88\"\"\"\"\"\"'   88 \"\"     `Y8 `8b     d8'      `\"\"\"\"\"8b, 88 a8\"     \"8a  88    I8[    \"\"  ";
        pslots[5] = "88          88 ,adPPPPP88  `8b   d8'             `8b 88 8b       d8  88     `\"Y8ba,   ";
        pslots[6] = "88          88 88,    ,88   `8b,d8'      Y8a     a8P 88 \"8a,   ,a8\"  88,   aa    ]8I  ";
        pslots[7] = "88          88 `\"8bbdP\"Y8     Y88'        \"Y88888P\"  88  `\"YbbdP\"'   \"Y888 `\"YbbdP\"'  ";
        pslots[8] = "                              d8'                                                     ";
        pslots[9] = "                             d8'                                                      ";
    }
    else if (banner == 'm') {

        pslots[0] = "88b           d88            88                88b           d88                                     ";
        pslots[1] = "888b         d888            \"\"                888b         d888                                     ";
        pslots[2] = "88`8b       d8'88                              88`8b       d8'88                                     ";
        pslots[3] = "88 `8b     d8' 88 ,adPPYYba, 88 8b,dPPYba,     88 `8b     d8' 88  ,adPPYba, 8b,dPPYba,  88       88  ";
        pslots[4] = "88  `8b   d8'  88 \"\"     `Y8 88 88P'   `\"8a    88  `8b   d8'  88 a8P_____88 88P'   `\"8a 88       88  ";
        pslots[5] = "88   `8b d8'   88 ,adPPPPP88 88 88       88    88   `8b d8'   88 8PP\"\"\"\"\"\"\" 88       88 88       88  ";
        pslots[6] = "88    `888'    88 88,    ,88 88 88       88    88    `888'    88 \"8b,   ,aa 88       88 \"8a,   ,a88  ";
        pslots[7] = "88     `8'     88 `\"8bbdP\"Y8 88 88       88    88     `8'     88  `\"Ybbd8\"' 88       88  `\"YbbdP'Y8   ";
    }
    else if (banner == 'l') {

        pslots[0] = "8b        d8                        88                                           ";
        pslots[1] = " Y8,    ,8P                         88                                           ";
        pslots[2] = "  Y8,  ,8P                          88                                           ";
        pslots[3] = "   \"8aa8\" ,adPPYba,  88       88    88          ,adPPYba,  ,adPPYba,  ,adPPYba,  ";
        pslots[4] = "    `88' a8\"     \"8a 88       88    88         a8\"     \"8a I8[    \"\" a8P_____88  ";
        pslots[5] = "     88  8b       d8 88       88    88         8b       d8  `\"Y8ba,  8PP\"\"\"\"\"\"\"  ";
        pslots[6] = "     88  \"8a,   ,a8\" \"8a,   ,a88    88         \"8a,   ,a8\" aa   ]8I \"8b,   ,aa  ";
        pslots[7] = "     88   `\"YbbdP\"'   `\"YbbdP'Y8    88888888888 `\"YbbdP\'  `\"YbbdP\"'  `\"Ybbd8\"'";
    }
    else if (banner == 'w') {

        pslots[0] = "8b        d8                        I8,        8        ,8I 88              ";
        pslots[1] = " Y8,    ,8P                         `8b       d8b       d8' \"\"              ";
        pslots[2] = "  Y8,  ,8P                           \"8,     ,8\"8,     ,8\"                  ";
        pslots[3] = "   \"8aa8\" ,adPPYba,  88       88      Y8     8P Y8     8P   88 8b,dPPYba,   ";
        pslots[4] = "    `88' a8\"     \"8a 88       88      `8b   d8' `8b   d8'   88 88P'   `\"8a  ";
        pslots[5] = "     88  8b       d8 88       88       `8a a8'   `8a a8'    88 88       88  ";
        pslots[6] = "     88  \"8a,   ,a8\" \"8a,   ,a88        `8a8'     `8a8'     88 88       88  ";
        pslots[7] = "     88   `\"YbbdP\"'   `\"YbbdP'Y8         `8'       `8'      88 88       88  ";
    }
    else if (banner == 'p'){

        pslots[0] = "88888888ba  88                         ";
        pslots[1] = "88      \"8b 88                        ";
        pslots[2] = "88      ,8P 88                         ";
        pslots[3] = "88aaaaaa8P' 88 ,adPPYYba, 8b       d8  ";
        pslots[4] = "88\"\"\"\"\"\"'   88 \"\"     `Y8 `8b  ";
        pslots[5] = "88          88 ,adPPPPP88  `8b   d8'   ";
        pslots[6] = "88          88 88,    ,88   `8b,d8'    ";
        pslots[7] = "88          88 `\"8bbdP\"Y8     Y88'   ";
        pslots[8] = "                              d8'      ";
        pslots[9] = "                             d8'       ";
    }

    for (int i = 0; i < 10; i++) {
        cout << "\t\t "<< pslots[i] << endl;
        Sleep(75); //Slow load effect. Makes it look like DOS
    }
}


void Effects::GetOne(int num){

    switch (num) {
    case wOne:
        wheelOnePtr[0] = "    88  ";
        wheelOnePtr[1] = "  ,d88  ";
        wheelOnePtr[2] = "888888  ";
        wheelOnePtr[3] = "    88  ";
        wheelOnePtr[4] = "    88  ";
        wheelOnePtr[5] = "    88  ";
        wheelOnePtr[6] = "    88  ";
        wheelOnePtr[7] = "    88  ";
        wheelOnePtr[8] = "";
        break;
    case wTwo:
        wheelTwoPtr[0] = "    88  ";
        wheelTwoPtr[1] = "  ,d88  ";
        wheelTwoPtr[2] = "888888  ";
        wheelTwoPtr[3] = "    88  ";
        wheelTwoPtr[4] = "    88  ";
        wheelTwoPtr[5] = "    88  ";
        wheelTwoPtr[6] = "    88  ";
        wheelTwoPtr[7] = "    88  ";         
            wheelTwoPtr[8] = "";
        break;
    case wThree:
        wheelThreePtr[0] = "    88  ";
        wheelThreePtr[1] = "  ,d88  ";
        wheelThreePtr[2] = "888888  ";
        wheelThreePtr[3] = "    88  ";
        wheelThreePtr[4] = "    88  ";
        wheelThreePtr[5] = "    88  ";
        wheelThreePtr[6] = "    88  ";
        wheelThreePtr[7] = "    88  ";         
            wheelThreePtr[8] = "";
        break;
    }
}

    

    void Effects::GetTwo(int num) {
    switch (num) {
    case wOne:
        wheelOnePtr[0] = " ad888888b,  ";
        wheelOnePtr[1] = "d8\"     \"88  ";
        wheelOnePtr[2] = "        a8P  ";
        wheelOnePtr[3] = "     ,d8P\"   ";
        wheelOnePtr[4] = "   a8P\"      ";
        wheelOnePtr[5] = " a8P'        ";
        wheelOnePtr[6] = "d8\"          ";
        wheelOnePtr[7] = "88888888888  ";
        wheelOnePtr[8] = "                   ";
        break;                               
                                             
    case wTwo:                               
        wheelTwoPtr[0] = " ad888888b,  ";
        wheelTwoPtr[1] = "d8\"     \"88  ";
        wheelTwoPtr[2] = "        a8P  ";
        wheelTwoPtr[3] = "     ,d8P\"   ";
        wheelTwoPtr[4] = "   a8P\"      ";
        wheelTwoPtr[5] = " a8P'        ";
        wheelTwoPtr[6] = "d8\"          ";
        wheelTwoPtr[7] = "88888888888  ";
        wheelTwoPtr[8] = "                   ";
        break;

    case wThree:
        wheelThreePtr[0] = " ad888888b,  ";
        wheelThreePtr[1] = "d8\"     \"88  ";
        wheelThreePtr[2] = "        a8P  ";
        wheelThreePtr[3] = "     ,d8P\"   ";
        wheelThreePtr[4] = "   a8P\"      ";
        wheelThreePtr[5] = " a8P'        ";
        wheelThreePtr[6] = "d8\"          ";
        wheelThreePtr[7] = "88888888888  ";
        wheelThreePtr[8] = "";
        break;
    }
}


void Effects::GetThree(int num) {
    switch (num) {
    case wOne:
        wheelOnePtr[0] = " ad888888b, ";
        wheelOnePtr[1] = "d8\"     \"88 ";
        wheelOnePtr[2] = "        a8P ";
        wheelOnePtr[3] = "     aad8\"  ";
        wheelOnePtr[4] = "     \"\"Y8,  ";
        wheelOnePtr[5] = "        \"8b ";
        wheelOnePtr[6] = "Y8,     a88 ";
        wheelOnePtr[7] = " \"Y888888P' ";
        wheelOnePtr[8] = "";
        break;                                
                                              
    case wTwo:                                
        wheelTwoPtr[0] = " ad888888b, ";
        wheelTwoPtr[1] = "d8\"     \"88 ";
        wheelTwoPtr[2] = "        a8P ";
        wheelTwoPtr[3] = "     aad8\"  ";
        wheelTwoPtr[4] = "     \"\"Y8,  ";
        wheelTwoPtr[5] = "        \"8b ";
        wheelTwoPtr[6] = "Y8,     a88 ";
        wheelTwoPtr[7] = " \"Y888888P' ";
        wheelTwoPtr[8] = "";
        break;
    
    case wThree:
        wheelThreePtr[0] = " ad888888b, ";
        wheelThreePtr[1] = "d8\"     \"88 ";
        wheelThreePtr[2] = "        a8P ";
        wheelThreePtr[3] = "     aad8\"  ";
        wheelThreePtr[4] = "     \"\"Y8,  ";
        wheelThreePtr[5] = "        \"8b ";
        wheelThreePtr[6] = "Y8,     a88 ";
        wheelThreePtr[7] = " \"Y888888P' ";
        wheelThreePtr[8] = "";
        break;
    }

}



void Effects::GetFour(int wheel) {
    switch (wheel) {
    case wOne:
         wheelOnePtr[0] = "        ,d8   ";
         wheelOnePtr[1] = "      ,d888   ";
         wheelOnePtr[2] = "    ,d8\" 88   ";
         wheelOnePtr[3] = "  ,d8\"   88   ";
         wheelOnePtr[4] = ",d8\"     88   ";
         wheelOnePtr[5] = "8888888888888 ";
         wheelOnePtr[6] = "         88   ";
         wheelOnePtr[7] = "         88   ";
         wheelOnePtr[8] = "";
         break;  

    case wTwo:   
        wheelTwoPtr[0] = "        ,d8   ";
        wheelTwoPtr[1] = "      ,d888   ";
        wheelTwoPtr[2] = "    ,d8\" 88   ";
        wheelTwoPtr[3] = "  ,d8\"   88   ";
        wheelTwoPtr[4] = ",d8\"     88   ";
        wheelTwoPtr[5] = "8888888888888 ";
        wheelTwoPtr[6] = "         88   ";
        wheelTwoPtr[7] = "         88   ";
        wheelTwoPtr[8] = "";
        break;

    case wThree:
        wheelThreePtr[0] = "        ,d8   ";
        wheelThreePtr[1] = "      ,d888   ";
        wheelThreePtr[2] = "    ,d8\" 88   ";
        wheelThreePtr[3] = "  ,d8\"   88   ";
        wheelThreePtr[4] = ",d8\"     88   ";
        wheelThreePtr[5] = "8888888888888 ";
        wheelThreePtr[6] = "         88   ";
        wheelThreePtr[7] = "         88   ";
        wheelThreePtr[8] = "";
        break;
    }
}



void Effects::GetFive(int num) {
    switch (num) {

    case wOne:
        wheelOnePtr[0] = "8888888888  ";
        wheelOnePtr[1] = "88          ";
        wheelOnePtr[2] = "88  ____    ";
        wheelOnePtr[3] = "88a8PPPP8b, ";
        wheelOnePtr[4] = "PP\"     `8b ";
        wheelOnePtr[5] = "         d8 ";
        wheelOnePtr[6] = "Y8a     a8P ";
        wheelOnePtr[7] = " \"Y88888P\"  ";
        wheelOnePtr[8] = "";
        break;

    case wTwo:
        wheelTwoPtr[0] = "8888888888  ";
        wheelTwoPtr[1] = "88          ";
        wheelTwoPtr[2] = "88  ____    ";
        wheelTwoPtr[3] = "88a8PPPP8b, ";
        wheelTwoPtr[4] = "PP\"     `8b ";
        wheelTwoPtr[5] = "         d8 ";
        wheelTwoPtr[6] = "Y8a     a8P ";
        wheelTwoPtr[7] = " \"Y88888P\"  ";
        wheelTwoPtr[8] = "";
        break;                             
                                           
    case wThree:                           
        wheelThreePtr[0] = "8888888888  ";
        wheelThreePtr[1] = "88          ";
        wheelThreePtr[2] = "88  ____    ";
        wheelThreePtr[3] = "88a8PPPP8b, ";
        wheelThreePtr[4] = "PP\"     `8b ";
        wheelThreePtr[5] = "         d8 ";
        wheelThreePtr[6] = "Y8a     a8P ";
        wheelThreePtr[7] = " \"Y88888P\"  ";
        wheelThreePtr[8] = "";
        break;                             
    }                                      
}                                          


void Effects::GetSix(int num) {
    switch (num) {
    case wOne:
        wheelOnePtr[0] = "  ad8888ba,  ";
        wheelOnePtr[1] = " 8P'    \"Y8  ";
        wheelOnePtr[2] = "d8           ";
        wheelOnePtr[3] = "88,dd888bb,  ";
        wheelOnePtr[4] = "88P'    `8b  ";
        wheelOnePtr[5] = "88       d8  ";
        wheelOnePtr[6] = "88a     a8P  ";
        wheelOnePtr[7] = " \"Y88888P\"   ";
        wheelOnePtr[8] = "";
        break;                             
                                           
    case wTwo:                             
        wheelTwoPtr[0] = "  ad8888ba,  ";
        wheelTwoPtr[1] = " 8P'    \"Y8  ";
        wheelTwoPtr[2] = "d8           ";
        wheelTwoPtr[3] = "88,dd888bb,  ";
        wheelTwoPtr[4] = "88P'    `8b  ";
        wheelTwoPtr[5] = "88       d8  ";
        wheelTwoPtr[6] = "88a     a8P  ";
        wheelTwoPtr[7] = " \"Y88888P\"   ";
        wheelTwoPtr[8] = "";
        break;

    case wThree:
        wheelThreePtr[0] = "  ad8888ba,  ";
        wheelThreePtr[1] = " 8P'    \"Y8  ";
        wheelThreePtr[2] = "d8           ";
        wheelThreePtr[3] = "88,dd888bb,  ";
        wheelThreePtr[4] = "88P'    `8b  ";
        wheelThreePtr[5] = "88       d8  ";
        wheelThreePtr[6] = "88a     a8P  ";
        wheelThreePtr[7] = " \"Y88888P\"   ";
        wheelThreePtr[8] = "";
        break;
    };
}


void Effects::GetSeven(int num) {
    switch (num) {
    case wOne:
        wheelOnePtr[0] = "888888888888  ";
        wheelOnePtr[1] = "        ,8P'  ";
        wheelOnePtr[2] = "       d8\"    ";
        wheelOnePtr[3] = "     ,8P'     ";
        wheelOnePtr[4] = "    d8\"       ";
        wheelOnePtr[5] = "  ,8P'        ";
        wheelOnePtr[6] = " d8\"          ";
        wheelOnePtr[7] = "8P'           ";
        wheelOnePtr[8] = "";
        break;

    case wTwo:
        wheelTwoPtr[0] = "888888888888  ";
        wheelTwoPtr[1] = "        ,8P'  ";
        wheelTwoPtr[2] = "       d8\"    ";
        wheelTwoPtr[3] = "     ,8P'     ";
        wheelTwoPtr[4] = "    d8\"       ";
        wheelTwoPtr[5] = "  ,8P'        ";
        wheelTwoPtr[6] = " d8\"          ";
        wheelTwoPtr[7] = "8P'           ";
        wheelTwoPtr[8] = "";
        break;

    case wThree:
        wheelThreePtr[0] = "888888888888  ";
        wheelThreePtr[1] = "        ,8P'  ";
        wheelThreePtr[2] = "       d8\"    ";
        wheelThreePtr[3] = "     ,8P'     ";
        wheelThreePtr[4] = "    d8\"       ";
        wheelThreePtr[5] = "  ,8P'        ";
        wheelThreePtr[6] = " d8\"          ";
        wheelThreePtr[7] = "8P'           ";
        wheelThreePtr[8] = "";
        break;
    };
}


string Effects::GetSeperator() {
    string sep = "      ||       ";
    return sep;
}



void Effects::GetSelected(int slot1, int slot2, int slot3) {

    //get the required numbers
    //output the required numbers to the screen
    // output num1[0], num2[0], num3[0]
    // each line needs to be output one by one
    
    switch (slot1) {
    case nOne:
        GetOne(1);
        break;
    case nTwo:
        GetTwo(1);
        break;
    case nThree:
        GetThree(1);
        break;
    case nFour:
        GetFour(1);
        break;
    case nFive:
        GetFive(1);
        break;
    case nSix:
        GetSix(1);
        break;
    case nSeven:
        GetSeven(1);
        break;
    default:
        break;
    };

    switch (slot2) {
    case nOne:
        GetOne(2);
        break;
    case nTwo:
        GetTwo(2);
        break;
    case nThree:
        GetThree(2);
        break;
    case nFour:
        GetFour(2);
        break;
    case nFive:
        GetFive(2);
        break;
    case nSix:
        GetSix(2);
        break;
    case nSeven:
        GetSeven(2);
        break;
    default:
        break;
    }

    switch (slot3) {
    case nOne:
        GetOne(3);
        break;
    case nTwo:
        GetTwo(3);
        break;
    case nThree:
        GetThree(3);
        break;
    case nFour:
        GetFour(3);
        break;
    case nFive:
        GetFive(3);
        break;
    case nSix:
        GetSix(3);
        break;
    case nSeven:
        GetSeven(3);
        break;
    default:
        break;
    }

    tool.ClearScreen();
    cout << "\n\t\t======================================================================================\n\n" ;
    for (int i = 0; i < 8; i++) {
        cout  << "\t\t\t   " << wheelOne[i] << GetSeperator()<<   wheelTwo[i] << GetSeperator() << wheelThree[i]  << "\n";

    }
    cout << "\n\t\t======================================================================================\n";
    
    
    
}
 
   
