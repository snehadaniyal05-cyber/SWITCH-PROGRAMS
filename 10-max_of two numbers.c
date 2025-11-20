#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    switch(a>b)
    {
        case 1:
            printf("%d is greater than %d\n",a,b);
            break;
        case 2:
            printf("%d is greater than %d\n",b,a);
            break;
    }
    return 0;
}