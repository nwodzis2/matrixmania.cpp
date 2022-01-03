//
//  edit_pg.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "edit_pg.hpp"
#include "position.hpp"
#include <iostream>
using namespace std;
void clear();
int position();
int edit_pg(int& y) //pre- takes in y value post-this function prints out the edit page
{
    clear();
    cout << "\tMatrices\t\tEdit\t\tOperations\t\t" << endl;
    cout << "\t        \t\t====" << endl;
    if (y > 10 || y < 1)
    {
        y = 1;
    }
    for(int i = 1; i <= 10; i++)
    {
        if(i != y)
        {
            cout << "[" << i << "]" << endl << endl;
        }
        else
        {
            cout << "[" << i << "]" << endl;
            cout << "---" << endl;;
        }
    }
    return(position());
}
