#include<stdio.h>
int main(){
int n=5;


for(int i =1 ; i<=3*n; i++ ){
    for(int j=1; j<=2*n-1;j++){

     if((i+j==n+i && i>n && i<=2*n) || j==(3*n)-i+1 && i>2*n ||(j==n+(i-2*n)-1 && i>2*n)){
printf("*");
      } else {
        printf(" ");
      }
        
    } 
    printf("\n");


}
return 0; 
}