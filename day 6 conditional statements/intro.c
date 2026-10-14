#include<stdio.h>
int main(){

 int age;

 printf("Enter your age :");
 scanf("%d", &age);
 
 if(age>=18){

  printf("*****************************\n\n");
  
  printf("you are eligible for voting \n\n");
  printf("*****************************\n");


}   else{

printf("*****************************\n");
  
  printf("you are not eligible for voting \n\n");
  printf("*****************************\n");


}

    return 0;
}