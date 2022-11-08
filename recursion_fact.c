#include<stdio.h>  
int factorial(int n)  
//recursive function
{  
  if (n == 0)                    //base case 
    return 1;  
  else  
    return(n * factorial(n-1));  //recusrsive procedure  
}  
   
void main()  
{  
  int number;  
  int  fact;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  fact = factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact);  
  return 0;  
}  
