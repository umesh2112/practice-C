// while loop 

 // while(condition){   // counting digits              for(inital;  end; update); 
 
  #include<stdio.h>

int main(){

int n, count =0;
printf("Enter the number :\n");
scanf("%d", &n);

while(n!=0){
  
n=n/10;
count ++;
                            // n = 0                            // n=n/10 
                            // count ++  count = 1 
}

printf("The number of digits are :%d", count);



    return 0;

}

//}