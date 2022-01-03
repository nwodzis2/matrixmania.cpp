//
//  introduction.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "introduction.hpp"
#include <iostream>
#include <ctime>
void clear();
using namespace std;
void introduction()//explained in main
{
    long k;
    time_t currentime;
    time(&currentime);
    k = currentime;
    cout << "|\\    /| |----| ----- |---\\ |---| \\  /" << endl;
    cout << "| \\  / | |____|   |   |___/   |    /\\ " << endl;
    cout << "|  \\/  | |    |   |   |   \\ |---| /  \\"<< endl << endl;
    cout << "|\\    /| |----| |\\  | |---| |----|" << endl;
    cout << "| \\  / | |____| | \\ |   |   |____|" << endl;
    cout << "|  \\/  | |    | |  \\| |---| |    |" << endl << endl;
    cout << "Welcome to Matrix Mania!" << endl;
    cout << "The program that does math with matrices." << endl;
    cout << "You will navigate using w-a-s-d enter, n then enter to select" << endl;
    cout << "You can end the program while in main part of the prorgam by entering and unused letter" << endl;
    cout << "You will be charged a dollar for each operation you make" << endl;
    cout << "For example, if a you do matrix multiplication it will be $1.00" << endl;
    cout << "Lets get started! (wait a few seconds)" << endl;
    k = k + 15;
    while(k != currentime)
    {
        time(&currentime);
    }
    clear();
}
