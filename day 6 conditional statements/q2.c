 // triange check, Take three angles as an input from the user and check whether it forms a triangle or not 
 // sum of angles in a triangle = 180 
 // a,b,c > 0

 #include<stdio.h> 
 int main(){

 int a, b,c; 

printf("Enter Three angles :");
scanf("%d%d%d", &a ,&b, &c);

if(a>0 && b >0 && c> 0 && a+b+c==180){
    printf("The angles forms a triangle \n");
} else {
    
    printf("It's not a triangle \n");
}



    return 0;
 }