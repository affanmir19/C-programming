#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(i=n;i>0;i--)
    {
        fact=fact * i;
    }
    printf("%d",fact);
    
    return 0;
    
}
