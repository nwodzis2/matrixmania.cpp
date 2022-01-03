//
//  splashscreen.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "splashscreen.hpp"
#include <iostream>
#include <ctime>
using namespace std;
void clear();
void splashscreen()
{
    long k;
    clear();
    time_t currentime;
    time(&currentime);
    k = currentime;
    cout << "\\        / |---- |      |---- |----| |\\    /| |---- " << endl;
    cout << " \\      /  |___  |      |     |    | | \\  / | |___  " << endl;
    cout << "  \\ /\\ /   |____ |____  |____ |____| |  \\/  | |____ " << endl << endl;
    k = k + 2;
    while(k != currentime)
    {
        time(&currentime);
    }
    clear();
        cout << "----- |----| " << endl;
        cout << "  |   |    | " << endl;
        cout << "  |   |____| " << endl << endl;
    k = k + 2;
    while(k != currentime)
    {
        time(&currentime);
    }
    clear();
    cout << "|\\    /| |----| ----- |---\\ |---| \\  /" << endl;
    cout << "| \\  / | |____|   |   |___/   |    /\\ " << endl;
    cout << "|  \\/  | |    |   |   |   \\ |---| /  \\";
    k = k + 2;
    while(k != currentime)
    {
        time(&currentime);
    }
    clear();
    cout << "|\\    /| |----| |\\  | |---| |----|" << endl;
    cout << "| \\  / | |____| | \\ |   |   |____|" << endl;
    cout << "|  \\/  | |    | |  \\| |---| |    |";
    k = k + 2;
    while(k != currentime)
    {
        time(&currentime);
    }
    clear();
}
