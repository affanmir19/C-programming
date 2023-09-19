// swapping a number
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of a and b :");
    scanf("%d%d", &a, &b);
    
    printf("\nValue of a before swapping = %d\n", a);
    printf("Value of b before swapping = %d\n", b);
    
    temp = a;    /*Logic*/
    a = b;
    b = temp;
    
    printf("\nValue of a after swapping= %d\n", a);
    printf("Value of b after swapping= %d\n", b);
}
