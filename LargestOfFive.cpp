//
//  LargestOfFive.cpp
//  LargestOfFive
//
//  Created by Vaishnavi Gandhi on 3/28/20.
//  Copyright © 2020 Vaishnavi Gandhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
   int n= 5;
   int largest;
   int num[50];
 
   
  
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<(i+1)<< ": ";
      cin>>num[i];
   }
   
   largest = num[0];
   for(int i = 1;i < n; i++) {
      if(largest < num[i])
         largest = num[i];
   }
   cout<<"Largest element in array is: "<<largest <<  "\n";
   return 0;
}
