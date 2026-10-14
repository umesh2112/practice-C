#include <stdio.h>
int main() {

    
int balance = 5000;
int withdrawl = 6000;


if(withdrawl <= balance){

    printf("Transacion successful\n"); 
    balance = balance - withdrawl ; 
}
    printf("Transaction failed due to some error\n");


printf("The remaining balance is %d", balance);


    return 0;
}     
// / => division   58/10 = 5.8  5 
// % => remainder    5%10  = 5     12%10 =  2     %10   any number which is less than 10 => the answer is the number itself 