//Write a program to check whether a string is pallindrome or not
#include <stdio.h>
int main()
{
    char a[100];
    int i,j;
    printf("Enter a string :");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        if(a[j]!=a[i-j-1])
        {
            printf("String is not a pallindrome");
            return 0;
        }
    }
    printf("String is a pallindrome");
    return 0;
}
