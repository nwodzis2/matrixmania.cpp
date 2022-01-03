//
//  interfaceuser.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "interfaceuser.hpp"
#include <iostream>
#include "userstruct.hpp"
void clear();
using namespace std;
void interface(pass& pass1)//pre: takes in the struct post: allows for user navigation
{

   char y = 'n';
   do{
       cout << "\t\t  |\\    /| |----| ----- |---\\ |---| \\  /" << endl;
       cout << "\t\t  | \\  / | |____|   |   |___/   |    /\\ " << endl;
       cout << "\t\t  |  \\/  | |    |   |   |   \\ |---| /  \\"<< endl << endl;
       cout << "\t\t\t|\\    /| |----| |\\  | |---| |----|" << endl;
       cout << "\t\t\t| \\  / | |____| | \\ |   |   |____|" << endl;
       cout << "\t\t\t|  \\/  | |    | |  \\| |---| |    |" << endl << endl;
       cout << "\t\t\t\t<Navigate using w-a-s-d.>" << endl << endl;
       cout << "\t\t\t Login\t\t\t\tCreate Account" << endl;
       cout << "\t\t\t =====" << endl;
       cin >> y;
       clear();
       pass1.x = 1;
       if(y != 'n')
       {
           cout << "\t\t  |\\    /| |----| ----- |---\\ |---| \\  /" << endl;
           cout << "\t\t  | \\  / | |____|   |   |___/   |    /\\ " << endl;
           cout << "\t\t  |  \\/  | |    |   |   |   \\ |---| /  \\"<< endl << endl;
           cout << "\t\t\t|\\    /| |----| |\\  | |---| |----|" << endl;
           cout << "\t\t\t| \\  / | |____| | \\ |   |   |____|" << endl;
           cout << "\t\t\t|  \\/  | |    | |  \\| |---| |    |" << endl << endl;
           cout << "\t\t\t\t<Navigate using w-a-s-d. >" << endl << endl;
           cout << "\t\t\t Login\t\t\t\tCreate Account" << endl;
           cout << "\t\t\t      \t\t\t\t==============" << endl;
           cin >> y;
           clear();
           pass1.x = 2;
       }
   }
   while(y != 'n');
}
