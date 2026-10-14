#include<stdio.h>

int main(){

 // q1. maximum of array 
 float arr[]={8,7,2,3,9,12,15,8,2};

      // printf("The size of first element is %zu\n",sizeof(arr[0]));
      // printf("The size of Complete array is  %zu",sizeof(arr));


  int max = arr[0];
    
  for(int i=0; i<=9;i++){           
   
  if(arr[i]>max){

    max=arr[i];
  }                            

  }   
  printf("The maximum number is %d", max);


}