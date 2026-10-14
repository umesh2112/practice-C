#include<stdio.h>
int main(){
int n=15;

for(int i=1; i<=3*n; i++){
    for(int j=1;j<=2*n-1;j++){
if(i==n || i+j==n+1 || i+j==n+(2*i)-1 || 
(i+j==n+i && i>=n && i<=2*n) || 
(i+j==3*n+1 && i>2*n) || (i+j==n+((2*i)-(2*n))-1 && i>2*n)
      ){
    printf("*");

} else {
    printf(" ");
}

    } 
    printf("\n");
}




    return 0; 
}