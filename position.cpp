//
//  position.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "position.hpp"
#include "UI_struct.hpp"
#include <iostream>
#include "matrixclass.hpp"
#include "matrices_select.hpp"
#include <fstream>
void print(int operations);
int matrices_pg(int& y);
int edit_pg(int& y);
int operations_pg(int& y);
void clear();
int choice(int y, int& rows, int& columns, int& operations);
using namespace std;
UI userinter1;
matrices matrix1;
int position()//already explained in declaration for main
{
    int o = 0;
    char z, p;
    if (userinter1.count == 0)
    {
        z = 'a';
        userinter1.count++;
    }
    else
    {
        cin >> z;
    }
    if(z == 'w')
    {
        userinter1.y -= 1;
    }
    else if ( z == 's')
    {
        userinter1.y += 1;
    }
    else if (z == 'd')
    {
        userinter1.x += 1;
    }
    else if (z == 'a')
    {
        userinter1.x -= 1;
    }
    else if (z == 'n')//this is where we are working right now
    {
        if(userinter1.x == 1)//this will just show the matrix
        {
         switch(userinter1.y)//this switchs prints out your matrice using userinter.y
             {
                 case 1:
                 {
                     ifstream output;
                     output.open("math1.txt");
                     clear();
                     for (string line; getline(output, line); )
                     {
                         cout << line << endl;
                     }
                     output.close();
                     cout << "Press w when you are done" << endl;
                     cin >> p;
                     clear();
                 }
                     break;
                 case 2:
                     {
                         ifstream output;
                         output.open("math2.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 3:
                     {
                         ifstream output;
                         output.open("math3.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 4:
                     {
                         ifstream output;
                         output.open("math4.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 5:
                     {
                         ifstream output;
                         output.open("math5.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 6:
                     {
                         ifstream output;
                         output.open("math6.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 7:
                     {
                         ifstream output;
                         output.open("math7.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 8:
                     {
                         ifstream output;
                         output.open("math8.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 9:
                     {
                         ifstream output;
                         output.open("math9.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
                 case 10:
                     {
                         ifstream output;
                         output.open("math10.txt");
                         clear();
                         for (string line; getline(output, line); )
                         {
                             cout << line << endl;
                         }
                         output.close();
                         cout << "Press w when you are done" << endl;
                         cin >> p;
                         clear();
                     }
                     break;
             }
             userinter1.count = 0;
             return(position());
     }
     if (userinter1.x == 2)
        {
            switch(userinter1.y)//this switch gets the matrices from the user
            {
                case 1:
                    {
                    clear();
                    ofstream math1;
                    math1.open("math1.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                        break;}
                case 2:
                {
                    clear();
                    ofstream math1;
                    math1.open("math2.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
                case 3:
                    {
                        clear();
                    ofstream math1;
                    math1.open("math3.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                        break;}
                case 4:
                    {
                        clear();
                    ofstream math1;
                    math1.open("math4.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
                case 5:
                    {
                        clear();
                    ofstream math1;
                    math1.open("math5.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
                case 6:
                    {
                        clear();
                    ofstream math1;
                    math1.open("math6.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
                case 7:
                    {
                        clear();
                    ofstream math1;
                    math1.open("math7.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
                case 8:
                    {
                        clear();
                    ofstream math1;
                    math1.open("math8.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
                case 9:
                    {
                    clear();
                    ofstream math1;
                    math1.open("math9.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
                case 10:
                    {
                        clear();
                    ofstream math1;
                    math1.open("math10.txt");
                    cout << "what is the size of your matrix? Separate by spaces" << endl;
                    cin >> matrix1.rows >> matrix1.columns;
                    for(int i = 0; i < matrix1.rows; i++)
                    {
                        cout << "row" << i << ": ";
                        for(int j = 0; j < matrix1.columns; j++)
                        {
                            cin >> o;
                            math1 << o << " ";
                        }
                        math1 << endl;
                    }
                        math1.close();
                    break;}
            }
            userinter1.count = 0;
            return(position());
        }
        if (userinter1.x == 3)
        {
            choice(userinter1.y, matrix1.rows, matrix1.columns, matrix1.operations);
        }
    }
    else
    {
        cout << "the program is ending";
        exit(1);
    }
    if(userinter1.x == 1)
    {
        return(matrices_pg(userinter1.y));
    }
    if (userinter1.x == 2)
    {
        return(edit_pg(userinter1.y));
    }
    if (userinter1.x == 3)
    {
        return(operations_pg(userinter1.y));
    }
    else
    {
        userinter1.y = 1;
        userinter1.x = 1;
        return(matrices_pg(userinter1.y));
        
    }
}

