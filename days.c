#include <stdio.h>
int main()
{
    char day;
    //1=monday 2=tuesday ...
    printf("Enter day(1-7).\n");
    //we use %c for char
    scanf("%c",&day);

    switch (day)
    //'' means that it is used for a  single variable
    {
        case 'm':printf("Monday.\n");
        break;
        case 't':printf("Tuesday.\n");
        break
        case 'w':printf("Wednesday.\n");
        break;
        case 'T':printf("Thursday.\n");
        break;
        case 'f':printf("Friday.\n");
        break;
        case 's':printf("Saturday.\n");
        break;
        case 'S':printf("Sunday.\n");

    }
    return 0;
}
