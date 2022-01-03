//
//  matrices_pg.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "matrices_pg.hpp"
#include "position.hpp"
#include <iostream>
using namespace std;
int position();
void clear();
int matrices_pg(int& y) //pre- takes in the y vaues post-this function prints out the matrices page
{
    clear();
    cout << "\tMatrices\t\t" << "Edit\t\t" << "Operations\t\t" << endl;
    cout << "\t========" << endl;
    for(int i = 1; i <= 10; i++)
    {
        if(y > 10 || y < 1)
        {
            y = 1;
        }
        if(i != y)
        {
            cout << "[" << i << "]" << endl << endl;
        }
        else
        {
            cout << "[" << i << "]" << endl;
            cout << "---" << endl;
        }
    }
    return(position());
}
