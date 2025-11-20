#include<stdio.h>
int main()
{
    int num;
    printf("Enter an number: ");
    scanf("%d", &num);

    switch(num%2)
    {
        case 1:
            printf("%d id an even number\n",num);
            break;
        case 2 :
           printf("%d is an odd number\n",num);
           break;
        }
    return 0;
}