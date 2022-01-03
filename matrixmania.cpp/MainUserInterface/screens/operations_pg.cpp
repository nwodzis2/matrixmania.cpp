//
//  operations_pg.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "operations_pg.hpp"
#include "position.hpp"
#include <iostream>
int position();
void clear();
using namespace std;
int operations_pg(int& y) //pre-takes in y value post-this function prints out the operations page
{
    clear();
    cout << "\tMatrices\t\tEdit\t\tOperations" << endl;
    cout << "\t        \t\t    \t\t==========" << endl;
    if(y == 1)
    {
        cout << "Addition" << endl;
        cout << "--------" << endl;
    }
    else if(y > 3 || y < 1)
    {
        cout << "Addition" << endl;
        cout << "--------" << endl;
        y = 1;
    }
    else
    {
        cout << "Addition" << endl << endl;
    }
    if(y == 2)
    {
        cout << "Subtraction" << endl;
        cout << "-----------" << endl;
    }
    else
    {
        cout << "Subtraction" << endl << endl;
    }
    if(y == 3)
    {
        cout << "Multiplication" << endl;
        cout << "--------------" << endl;
    }
    else
    {
        cout << "Multiplication" << endl << endl;
    }
    for (int i = 0; i < 14; i++)
    {
        cout << endl;
    }
    return(position());
}
