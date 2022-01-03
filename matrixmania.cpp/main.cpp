//
//  main.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 11/17/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//This program performs matrix math you can see what it does though the instructions.
//here is an account wodzisz22 and the password is 22wodzisz if for some reason you can not create an account
#include <iostream>
#include "splashscreen.hpp"
#include "introduction.hpp"
#include "identification.hpp"
#include "position.hpp"
using namespace std;
void clear();//this function clears the screen my outputting 50 blank lines
void splashscreen();//this is a splash screen
void introduction();//this function explains the program
void identification();//this function gets authenticates the user
int position();//this is the main function of the UI it is in charge of putting everthing together as well as changing x y values so I know where the user clicked enter
int main()
{
    splashscreen();
    introduction();
    identification();
    position();
    cout << "you can find your reciept in a .txt file, have a great day.";
    return 0;
}
void clear()//already explained in declaration for main
{
    for(int i = 0; i < 50; i++)
    {
        cout << endl;
    }
}
