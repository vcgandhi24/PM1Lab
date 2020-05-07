//
//  BisectionMethod.cpp
//  BisectionMethod
//
//  Created by Vaishnavi Gandhi on 4/30/20.
//  Copyright © 2020 Vaishnavi Gandhi. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
double tolerance;

double equation(double x) {
   return pow(x, 3) + x - 5;
}

void bisection(double a, double b) {
   if (equation(a) * equation(b) >= 0) {
      cout << "There is no roots conatined in this interval. \n";
      return;
   }
   double c = a;
   while ((b-a) >= tolerance) {
      c = (b+a);
       c = c/2;
      if (equation(c) == 0.0)
         break;
      else if (equation(c)*equation(a) < 0)
         b = c;
      else
         a = c;
   }
   cout << "x = " << c << " is an approximate solution of f(x) = 0 to within " << tolerance << "\n";
}
 
int main() {
   double a, b;
    cout << "Desired accuracy of the approximation (tolerance): ";
    cin >> tolerance;
    cout << "Enter the endpoints of an interval: ";
    cin >> a >> b;
    bisection(a, b);
    return 0;
}
