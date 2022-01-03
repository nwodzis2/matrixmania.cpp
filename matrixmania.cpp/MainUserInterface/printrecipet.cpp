//
//  printrecipet.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/6/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "printrecipet.hpp"
#include <fstream>
#include <iostream>
using namespace std;
void print(int operations)//this function takes in the number of operations and prints out a recipt
{
    ofstream receipt;
    receipt.open("receipt.txt");
    receipt << "Thank you for using the program!" << endl;
    receipt << "You performed" << operations << " operations" << endl;
    receipt << "Your total will be $" << operations << ".00";
    
}
