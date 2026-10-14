 // 
 #include<stdio.h>
 int main(){
 
    int balance = 5000;
   int card, pin, repin, cash, ream ;
     printf("Enter 1 if you insert card if not enter 0 :");
     scanf("%d",&card);
     if(card==1){
      printf("\nSuccessful \n");
     printf("Enter your pin number :");
     scanf("%d", &pin); 
     printf("\nre-enter your pin :");
     scanf("%d", &repin);

     if(pin==repin){
     printf("\nPin number verified successfully \nEnter the Withdrawl amount :\n");
     scanf("%d",&cash);

     if(cash <=balance){
        printf("Transaction successful \n");
        ream = balance - cash;
        printf("The Balance amount is %d", ream);   
     } else {

        printf("Please enter valid amount \n");
     }

     } else {
     printf("pin number not verified \n");
     
    }  


     } else {
       printf("Please enter card to proceed ");

     }


    return 0;
 }  





 