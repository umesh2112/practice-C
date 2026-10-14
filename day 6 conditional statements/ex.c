// Largest among three numbers using conditional statements
#include   <stdio.h> 
int main(){

int a, b,c; 
int max;
printf("Enter any three number you whish :");
scanf("%d%d%d", &a ,&b, &c);

if(a>b && a>c){
    max = a;
} else if(b>a && b>c){
    max = b;
} else {
    max=c;
} 
 printf("The largest number among three number is %d", max);

    return 0; 
}