#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a :");\
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("It is a even number");
    }
    else
    {
        printf("It is an odd number");
    }
    return  0;
}
