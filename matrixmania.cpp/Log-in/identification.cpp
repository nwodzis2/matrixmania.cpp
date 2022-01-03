//
//  identification.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "identification.hpp"
#include "userstruct.hpp"
#include "interfaceuser.hpp"
#include "authentication.hpp"
#include <iostream>
#include <fstream>
#include <string>
void clear();
void interface(pass& pass1);
void authenticate(pass& pass1);
using namespace std;
void identification()
{
    pass pass1;
    interface(pass1);
    authenticate(pass1);
}


