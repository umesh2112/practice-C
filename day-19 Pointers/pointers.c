#include<stdio.h>
int main(){

int a=10; 
int *ptr = &a;   // &   *
 
printf("The address is %p", &a);
printf("The address is %d", *ptr);
printf("The address is %d", *(&a));

 
//call by value   call by reference


}