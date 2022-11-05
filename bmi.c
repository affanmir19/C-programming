#include <stdio.h>
int main()
{
    float height,weight,bmi;
    printf("Enter your weight in kilograms :");
    scanf("%f",&weight);
    printf("Enter your height in metres :");
    scanf("%f",&height);
    bmi = weight/(height * height);
    printf("Your BMI is %f\n",bmi);
    if(bmi<18.5){
        printf("You are underweight\n");
    }
    else if(bmi<=24.9){
        printf("You are in the healthy weight\n");
    }
    else{
        printf("You are overweight");
    }
    return 0;
}
