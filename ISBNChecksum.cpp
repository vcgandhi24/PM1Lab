//
//  ISBNChecksum.cpp
//  ISBNChecksum
//
//  Created by Vaishnavi Gandhi on 3/31/20.
//  Copyright © 2020 Vaishnavi Gandhi. All rights reserved.
//

#include <stdio.h>

int main(void) {

    int num, mod, digit,i,sum=0,j=2;
    printf("Enter the first 9 digits of the ISBN: ");
    scanf("%d",&num);
    for(i=0;i<9;i++)
   {
        mod = num%10;
        sum = sum+(mod*j);
        j++;
        num= num/10;
   }
    digit = sum%11;
   if(digit==0)
   {
       printf("The checksum digit is %d \n", digit);
   }
    
   else if((digit>0)&&(digit<10))
   {
       digit = 11-digit;
       printf("The checksum is %d \n",digit);
   }
    
   else
       printf("The checksum is X \n");
       return 0;
}

