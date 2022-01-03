//
//  matrices_select.cpp
//  matrixmania.cpp
//
//  Created by Nathan wodzisz on 12/1/19.
//  Copyright © 2019 Nathan wodzisz. All rights reserved.
//

#include "matrices_select.hpp"
#include "UI_struct.hpp"
#include "position.hpp"
#include "matrixclass.hpp"
#include "printrecipet.hpp"
#include <iostream>
#include <vector>
#include <fstream>
void clear();
int position();
int operations();
void print(int operations);
void add(int& rows, int& columns);
void subtract(int& rows, int& columns);
void mult(int& rows, int& columns);
UI position1;
using namespace std;
int x, z;
int choice(int y, int& rows, int& columns, int& operations)//preconditon: this function takes in the y values, #columns, and #operations
{//postcondition: this function prints out the interface for the operations and calls on the operations and updates the operation variable
    clear();
    cout << "*select the matrix*" << endl;
    cout << "\tMatrices\t\t" << endl;
    cout << "\t========" << endl;
    for(int i = 1; i <= 10; i++)
    {
        if(position1.y > 10 || position1.y < 1)
        {
            position1.y = 1;
        }
        if(i == position1.y)
        {
            cout << "[" << i << "]" << endl;
            cout << "---" << endl;
        }
        else
        {
            cout << "[" << i << "]" << endl << endl;
        }
    }
    char l;
    cin >> l;
    if(l == 'w')
    {
        position1.y -= 1;
    }
    else if ( l == 's')
    {
        position1.y += 1;
    }
    else if( l == 'n')
    {
         switch(position1.y)
             {
                 case 1:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 1;
                     }
                     else
                     {
                         z = 1;
                     }
                     
                     break;
                 case 2:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 2;
                     }
                     else
                     {
                         z = 2;
                     }
                     break;
                 case 3:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 3;
                     }
                     else
                     {
                         z = 3;
                     }
                     return(0);
                     break;
                 case 4:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 4;
                     }
                     else
                     {
                         z = 4;
                     }
                     return(0);
                     break;
                 case 5:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 5;
                     }
                     else
                     {
                         z = 5;
                     }
                     return(0);
                     break;
                 case 6:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 6;
                     }
                     else
                     {
                         z = 6;
                     }
                     return(0);
                     break;
                 case 7:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 7;
                     }
                     else
                     {
                         z = 7;
                     }
                     return(0);
                     break;
                 case 8:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 8;
                     }
                     else
                     {
                         z = 8;
                     }
                     return(0);
                     break;
                 case 9:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 9;
                     }
                     else
                     {
                         z = 9;
                     }
                     return(0);
                     break;
                 case 10:
                     position1.count2++;
                     if(position1.count2 == 1)
                     {
                         x = 10;
                     }
                     else
                     {
                         z = 10;
                     }
                     return(0);
                     break;
             }
        }
    if(position1.count2 < 2)
    {
        return(choice(y, rows, columns, operations));
    }
    else{
        if(y == 1)
        {
            add(rows, columns);
            position1.count2 = 0;
            operations++;
        }
        if(y == 2)
        {
            subtract(rows, columns);
            position1.count2 = 0;
            operations++;
        }
        if(y == 3)
        {
            mult(rows, columns);
            position1.count2 = 0;
            operations++;
        }
        cout << "your resulting matrice will be in a .txt file, enter w to continue";
        print(operations);
        return(position());
    }
}
void add(int& rows, int& columns) //precondition takes in the number of rows.columns post condition performs the operations and saves to txt
{
    int first, second, count = 0, count2 = 0;
    ofstream add;
    add.open("finaladdition.txt");
    ifstream add1;
    ifstream add2;
    if(x == 1 || z == 1)
    {
        if(x == 1)
        {
            add1.open("math1.txt");
        }
        else
        {
            add2.open("math1.txt");
        }
    }
    if(x == 2 || z == 2)
    {
        if(x == 2)
        {
            add1.open("math2.txt");
        }
        else
        {
            add2.open("math2.txt");
        }
    }
    if(x == 3 || z == 3)
    {
        if(x == 3)
        {
            add1.open("math3.txt");
        }
        else
        {
            add2.open("math3.txt");
        }
    }
    if(x == 4 || z == 4)
    {
        if(x == 4)
        {
            add1.open("math4.txt");
        }
        else
        {
            add2.open("math4.txt");
        }
    }
    if(x == 5 || z == 5)
    {
        if(x == 5)
        {
            add1.open("math5.txt");
        }
        else
        {
            add2.open("math5.txt");
        }
    }
    if(x == 6 || z == 6)
    {
        if(x == 6)
        {
            add1.open("math6.txt");
        }
        else
        {
            add2.open("math6.txt");
        }
    }
    if(x == 7 || z == 7)
    {
        if(x == 7)
        {
            add1.open("math7.txt");
        }
        else
        {
            add2.open("math7.txt");
        }
    }
    if(x == 8 || z == 8)
    {
        if(x == 8)
        {
            add1.open("math8.txt");
        }
        else
        {
            add2.open("math8.txt");
        }
    }
    if(x == 9 || z == 9)
    {
        if(x == 9)
        {
            add1.open("math9.txt");
        }
        else
        {
            add2.open("math9.txt");
        }
    }
    if(x == 10 || z == 10)
    {
        if(x == 10)
        {
            add1.open("math10.txt");
        }
        else
        {
            add2.open("math10.txt");
        }
    }
    while(count2 < rows)
    {
        while(count < columns)
        {
            add1 >> first;
            add2 >> second;
            add << first + second << " ";
            count++;
        }
        add << endl;
        count = 0;
        count2++;
    }
    add1.close();
    add2.close();
    add.close();
}
void subtract(int& rows, int& columns) //precondition takes in the number of rows,columns post condition performs the operations and saves to txt
{
    int first, second, count = 0, count2 = 0;
    ofstream add;
    add.open("finalsubtraction.txt");
    ifstream add1;
    ifstream add2;
    if(x == 1 || z == 1)
    {
        if(x == 1)
        {
            add1.open("math1.txt");
        }
        else
        {
            add2.open("math1.txt");
        }
    }
    if(x == 2 || z == 2)
    {
        if(x == 2)
        {
            add1.open("math2.txt");
        }
        else
        {
            add2.open("math2.txt");
        }
    }
    if(x == 3 || z == 3)
    {
        if(x == 3)
        {
            add1.open("math3.txt");
        }
        else
        {
            add2.open("math3.txt");
        }
    }
    if(x == 4 || z == 4)
    {
        if(x == 4)
        {
            add1.open("math4.txt");
        }
        else
        {
            add2.open("math4.txt");
        }
    }
    if(x == 5 || z == 5)
    {
        if(x == 5)
        {
            add1.open("math5.txt");
        }
        else
        {
            add2.open("math5.txt");
        }
    }
    if(x == 6 || z == 6)
    {
        if(x == 6)
        {
            add1.open("math6.txt");
        }
        else
        {
            add2.open("math6.txt");
        }
    }
    if(x == 7 || z == 7)
    {
        if(x == 7)
        {
            add1.open("math7.txt");
        }
        else
        {
            add2.open("math7.txt");
        }
    }
    if(x == 8 || z == 8)
    {
        if(x == 8)
        {
            add1.open("math8.txt");
        }
        else
        {
            add2.open("math8.txt");
        }
    }
    if(x == 9 || z == 9)
    {
        if(x == 9)
        {
            add1.open("math9.txt");
        }
        else
        {
            add2.open("math9.txt");
        }
    }
    if(x == 10 || z == 10)
    {
        if(x == 10)
        {
            add1.open("math10.txt");
        }
        else
        {
            add2.open("math10.txt");
        }
    }
    while(count2 < rows)
    {
        while(count < columns)
        {
            add1 >> first;
            add2 >> second;
            add << first - second << " ";
            count++;
        }
        add << endl;
        count = 0;
        count2++;
    }
    add1.close();
    add2.close();
    add.close();
}
void mult(int& rows, int& columns) //precondition takes in the number of rows,columns post condition performs the operations and saves to txt
{
    int first, second, count = 0, count2 = 0;
    ofstream add;
    add.open("finalmultiplication.txt");
    ifstream add1;
    ifstream add2;
    if(x == 1 || z == 1)
    {
        if(x == 1)
        {
            add1.open("math1.txt");
        }
        else
        {
            add2.open("math1.txt");
        }
    }
    if(x == 2 || z == 2)
    {
        if(x == 2)
        {
            add1.open("math2.txt");
        }
        else
        {
            add2.open("math2.txt");
        }
    }
    if(x == 3 || z == 3)
    {
        if(x == 3)
        {
            add1.open("math3.txt");
        }
        else
        {
            add2.open("math3.txt");
        }
    }
    if(x == 4 || z == 4)
    {
        if(x == 4)
        {
            add1.open("math4.txt");
        }
        else
        {
            add2.open("math4.txt");
        }
    }
    if(x == 5 || z == 5)
    {
        if(x == 5)
        {
            add1.open("math5.txt");
        }
        else
        {
            add2.open("math5.txt");
        }
    }
    if(x == 6 || z == 6)
    {
        if(x == 6)
        {
            add1.open("math6.txt");
        }
        else
        {
            add2.open("math6.txt");
        }
    }
    if(x == 7 || z == 7)
    {
        if(x == 7)
        {
            add1.open("math7.txt");
        }
        else
        {
            add2.open("math7.txt");
        }
    }
    if(x == 8 || z == 8)
    {
        if(x == 8)
        {
            add1.open("math8.txt");
        }
        else
        {
            add2.open("math8.txt");
        }
    }
    if(x == 9 || z == 9)
    {
        if(x == 9)
        {
            add1.open("math9.txt");
        }
        else
        {
            add2.open("math9.txt");
        }
    }
    if(x == 10 || z == 10)
    {
        if(x == 10)
        {
            add1.open("math10.txt");
        }
        else
        {
            add2.open("math10.txt");
        }
    }
    while(count2 < rows)
    {
        while(count < columns)
        {
            add1 >> first;
            add2 >> second;
            add << first * second << " ";
            count++;
        }
        add << endl;
        count = 0;
        count2++;
    }
    add1.close();
    add2.close();
    add.close();
}
