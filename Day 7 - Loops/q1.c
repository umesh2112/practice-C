//  
#include<stdio.h>
 int main(){

int n=10;
int fact=1;


for(int i=n; i>=1; i--){     
   fact = fact *i;
 }
 printf("The number is %d", fact);



 


    return 0;
  }