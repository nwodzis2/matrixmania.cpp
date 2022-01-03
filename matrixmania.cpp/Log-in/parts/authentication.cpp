//
//  authentication.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "authentication.hpp"
#include "userstruct.hpp"
#include <iostream>
#include <fstream>
void clear();
using namespace std;
void authenticate(pass& pass1)//pre: takes in stuct post-this function authenticates the user and will create a new account
{
    bool s;
    int fail = 0;
    if(pass1.x == 1)
    {
        cout << "Please enter your username, min of 3 characters: ";
        cin >> pass1.username;
        pass1.username = pass1.username;
        ifstream user;
        user.open(pass1.username);
        getline(user, pass1.username1);
        clear();
        if(pass1.username1 == pass1.username)
        {
            do {
            cout << "Please enter your password: ";
            cin >> pass1.password;
            getline(user, pass1.password1);
            if(pass1.password1 == pass1.password)
            {
                cout << endl << "thank you!"  << endl;
                s = true;
            }
            else{
                cout << "please try again, " << endl;
                s = false;
                fail++;
                if (fail == 3)
                {
                    cout << "Too many failed attemps";
                    exit(1);
                }
            }
            clear();
            }
            while(s == false);
        }
        else{//needs work here
            cout << "Invalid username!";
            cout << "The program will end here";
        }
    }
    if(pass1.x == 2)
    {
        cout << "Please enter a username of 3 characters or longer: ";
        cin >> pass1.username;
        ofstream user;
        user.open(pass1.username);
        user << pass1.username << endl;
        clear();
        cout << "Please the password you wish to use: ";
        cin >> pass1.password;
        user << pass1.password << endl;
        clear();
        cout << "thank you! your username is: " << pass1.username << " and your password is: " << pass1.password;
        clear();
        cout << "Please enter your credit card number: ";
        cin >> pass1.credit;
        user << pass1.credit << endl;
        clear();
    }
}

