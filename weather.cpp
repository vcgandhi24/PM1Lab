//
//  main.cpp
//  NationalWeatherService
//
//  Created by Vaishnavi Gandhi on 3/25/20.
//  Copyright © 2020 Vaishnavi Gandhi. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main() {
    double temp = 0;
    double velocity = 0;
    cout<<"Enter Temperature: ";
    cin>>temp;
    cout<<"Enter velocity: ";
    cin>>velocity;
    double wind = 35.74 + 0.6215 * temp + (0.4275*temp - 35.75)* pow(velocity,0.16);
    printf("The wind cill is %f \n",wind);
    return 1;
 }



