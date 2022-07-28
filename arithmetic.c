#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("a+b=%d\n",c);
    c=a-b;
    printf("a-b=%d\n",c);
    c=a*b;
    printf("a*b=%d\n",c);
    c= a/b; //It gives us the quotient
    printf("a/b=%d\n",c);
    return 0;
}
