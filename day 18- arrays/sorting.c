#include<stdio.h>
int main(){
 int arr[] ={1,2,3,4,8,98,41,25,36,4,7,89,6,21,33,25,5}; // TC O(n)

  int length = sizeof(arr)/sizeof(arr[5]);
    int i,j,temp;
    for(int i=0; i<length-1; i++){
        for(int j=0;j<length-1-i; j++){

        if( arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;
        }


        }
    }
printf("The sorted array is :");

for(int i=0; i<length; i++){
    printf("%d ",arr[i]);
}






}