// second largest element in the array 
#include<stdio.h>

int main(){ 

    float arr[]={8,7,2,3,9,12,15,8,2};
    int max = arr[0];   
    int max2 = -1;
    for(int i=0; i<=9;i++){           
        
        if(arr[i]>max){
            
            max=arr[i];
        }                            
        
    }   
    printf("The maximum number is %d", max);


    for(int i=0; i<=9;i++){           
        
        if(arr[i]<max && arr[i]>max2){
            
            max2=arr[i];
        }                            
    } 
    printf("\nThe second largest element is  : %d", max2);




}