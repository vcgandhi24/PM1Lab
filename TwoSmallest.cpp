//
//  main.cpp
//  TwoSmallest
//
//  Created by Vaishnavi Gandhi on 3/31/20.
//  Copyright © 2020 Vaishnavi Gandhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
   
   int n, smallest, secondSmallest;
   int num[50];
   cout<<"Enter number of elements you want to enter: ";
   cin>>n;
   
   
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<(i+1)<< ": ";
      cin>>num[i];
   }
  
   smallest = num[0];
   for(int i = 1;i < n; i++) {
      if(smallest > num[i])
         smallest = num[i];
   }
   cout<<"Smallest element in array is: "<<smallest << "\n";
    
    secondSmallest = num[0];
    for(int i = 1;i < n; i++) {
       if(secondSmallest > num[i] > smallest)
          smallest = num[i];
    }
    cout<<"Second Smallest element in array is: "<< secondSmallest << "\n";
    
   return 0;
}
