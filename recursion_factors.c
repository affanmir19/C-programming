//finding prime factors of a number recursively
#include <stdio.h>
void factorize(int n,int i) //recursive function
{
    if(i<=n)
    {
        if(n%i==0){
            printf("%d",i);
            n=n/i;
        }
        else 
            i++;
        factorize(n,i);    
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Prime factors = ");
    factorize(num,2);
    return 0;
}