  #include<stdio.h>

  void sqr(int *n);


  int main(){
 
     int num= 5;
     
     sqr(&num);                  // &    *
    
      printf("\nthe value is %d", num);

  // call by value 
  } 

 // call by reference

  void sqr(int *n){
  *n = (*n)*(*n);
    printf("The square of the number is %d", *n);


}

