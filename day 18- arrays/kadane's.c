#include<stdio.h>

int main(){
 int arr[] ={-2,1,-3,4,-1,2,1,-5,4};
//  int arr[] ={-2,1,-3,4};
  int n = sizeof(arr)/sizeof(arr[5]);

int max=arr[0];

 for(int i=0;i<n; i++){
    for(int j=i; j<n;j++){
        int sum=0;
        for(int k=i; k<=j;k++){
 
         printf("%d",arr[k]);
         sum=sum+arr[k];

        }
if(sum>max){
    max=sum;
}

        printf(" ");
    }
    printf("\n");
 }

printf("The maximum value is %d", max);





}