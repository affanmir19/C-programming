//finding average of the numbers that are given by the user
#include <stdio.h>
int main()
{
     int scores[3];
     printf("Enter the array elements\n");
     for(int i=0;i<=2;i++){
         scanf("%d",&scores[i]);
     }
     printf("Array elements are\n");
     for(int i=0;i<=2;i++){
          printf("%d\n",scores[i]);
     }
     printf("Average = %d\n",(scores[0]+scores[1]+scores[2])/2);
     return 0;
}
