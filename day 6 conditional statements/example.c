// Q. Take student mark as an input and calculate their grade in each subject and print the grade
// 1) if marks lies b/w 90 - 100 = A 
// 2) if marks are B/W 80 - 90 =B

#include<stdio.h>
int main(){

int marks; 

printf("Enter the marks  in chemistry :");
scanf("%d", &marks);


if(marks < 0 || marks > 100){
    printf("Invalid marks");
}
else if(marks >=90 && marks <=100 ){
    printf("The grade you got  A");
} else if(marks >=80 && marks <90){
    printf("The grade you got is B");
} else {
    printf("Fail Because you got lesser marks than pallavi and Chandana"); 
} 


    return 0;
}  

// Shradha mam  # end credits  