// divisibility check for 5 and 11  
#include<stdio.h> 
int main(){

int num;
printf("Enter number :");
scanf("%d", &num);

if(num%5 ==0 && num%11 ==0){
    printf("Yes");
}else {
    printf("NO");
}


    return 0;
}