//
//  userstruct.hpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#ifndef userstruct_hpp
#define userstruct_hpp

#include <stdio.h>
#include "userstruct.hpp"
#include <string>
using namespace std;
//this is a struct that contains the variables needed to authenticate
struct pass{
    int x;
    int credit;
    string username, username1;
    string password, password1;
};
#endif /* userstruct_hpp */
