//
//  main.cpp
//  ascenddescend
//
//  Created by Vaishnavi Gandhi on 3/28/20.
//  Copyright © 2020 Vaishnavi Gandhi. All rights reserved.
//
// Write a C++ program that takes four int command-line arguments w, x, y, and z. Define a boolean variable whose value is true if the four values are either in strictly ascending order (w < x < y < z) or strictly descending order (w > x > y > z), and false otherwise. Then, display the boolean variable value.
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    bool strict = false;
    
    cout<<"Enter value for w: ";
    cin>>w;
    cout<<"Enter value for x: ";
    cin>>x;
    cout<<"Enter value for y: ";
    cin>>y;
    cout<<"Enter value for z: ";
    cin>>z;
    
    if (w > x && x > y  && y > z )
    {
        strict = true;
    }
    else if  (w < x && x < y && y < z)
    {
        strict = true;
    }
    else
    {
      strict = false;
    }
    cout << boolalpha << strict << endl;
    return 0;
}
