
// 1 to n  n=30  x , y x = 100 y = 5 
#include<stdio.h>
int main(){

 int count =0;
 
 for(int i = 1; i<=100; i++){
   
    if(i%5==0){    //   i % 5          5 %10 = 5 
        count++;
    }

 }

printf("the coutn is %d", count);

    return 0;
}