//swapping two numbers and taking inputs from the user
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is %d",a);
    return 0;
}
