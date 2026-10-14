#include<stdio.h>
int main(){

int arr[] ={1,2,3,4,8,98,41,25,36,4,7,89,6,21,33,25,5}; // TC O(n)

  int length = sizeof(arr)/sizeof(arr[5]);
  int n;
  printf("enter the numbver :\n");
  scanf("%d", &n);
for(int i=0; i<length; i++){

    if(arr[i]==n){
printf("\nThe target value found at the index : %d", i);

    }
}





    return 0;
}