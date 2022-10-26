#include <stdio.h>
int main()
{
    int pin,amount=20000;
    printf("****WELCOME TO J&K BANK****\n");
    printf("Enter your four digit pin :");
    scanf("%d",&pin);
    if(pin==1234){
        printf("Choose your amount which you want to withdraw :");
        scanf("%d",&amount);
        if(amount<20000){
            printf("Take your cash\n");
        }
        else{
            printf("Error occured");
        }
        printf("Thanks for using J&K bank");
    }
    else{
        printf("Recheck your pin\n");
    }
    return 0;
}
