#include <stdio.h>

int main() {
    int score = 45;


     
    // if (score > 30) {
    //     printf("You passed the exam!\n");
    // } else if(score ==45) {
    //     printf("You just passed the exam!\n");
    // } else if(score < 30) {
    //     printf("You failed the exam.\n");
    // } else {
    //     printf("Invalid score.\n");
    // } 
        
   // same code using nested if statements  
   

      if(score <30){
         printf("You have passed the exam\n");
       if(score==45){
        printf("You got exactly passing mark\n");
         
        if(score >20){
            printf("you got more marks");
        }

       }

      } else {
        printf("Pallavi ------> invalid ");
      }

   

 
    
    
    
    return 0;
}
