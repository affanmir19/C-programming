#include <stdio.h>
int main()
{
    int n,a,b=1,c=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
