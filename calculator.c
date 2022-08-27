//making basic calculator using function
#include <stdio.h>
int addnumbers(int a, int b);
int subnumbers(int a,int b);
int multnumbers(int a,int b);
int divinumbers(int a,int b);
int main()
{
    int n1,n2,diff,sum,mult,divi;
    printf("Enter the value of n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    sum=addnumbers(n1,n2);
    printf("Sum = %d\n",sum);
    diff=subnumbers(n1,n2);
    printf("Difference = %d\n",diff);
    mult=multnumbers(n1,n2);
    printf("Multiplication = %d\n",mult);
    divi=divinumbers(n1,n2);
    printf("Division = %d\n",divi);
    
    return 0;
}
int addnumbers(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
int subnumbers(int a,int b)
{
    int result;
    result=a-b;
    return result;
}
int multnumbers(int a,int b)
{
    int result;
    result=a*b;
    return result;
}
int divinmbers(int a,int b)
{
    int result=
    result=a/b;
    return result;
}
