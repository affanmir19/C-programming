#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    // != not equal to
    printf("%d\n",a != b);
  // == equal to
    printf("%d\n",a == b);
  // >= greater than or equal to
    printf("%d\n",a >= b);
   // <= less than or equal to
    printf("%d\n",a <= b);
   // 1 means true and 0 means false
    return 0;
}
