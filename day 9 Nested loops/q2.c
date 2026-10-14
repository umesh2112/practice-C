#include<stdio.h>
int main(){


    for(int i=1;i<=5;i++){ // outer       
    for(int j=1;j<=6;j++){
        printf("*"); 
    }
    for(int k=1;k<=7;k++){ // inner loop
        printf("%d %d %d", i,j,k);
    }                
    
}                // 1 1 1 
                //  1 1 2
                //  1 2 1 
                 // 1 2 2
                 
   // for every one iteration of the outer loop
   //  middle loop runs completely 

//   for every one iteration of the middle loop 
//   inner loop runs completely

    return 0;
}