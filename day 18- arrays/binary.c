#include<stdio.h>
int main(){

int arr[]={1,1,2,3,5,6,9,25,36,48};
int n = sizeof(arr)/sizeof(arr[5]);
int target = 36;
int start, end, mid;  
start=0;
end=n-1;

while(start<=end){

mid=(start+end)/2;
if(arr[mid]==target){
    printf("The value found at %d", mid);
 break;
}else if(arr[mid]>target){

end =mid-1;
    
}else if(arr[mid]<target){

    start =mid+1;
}

}





}