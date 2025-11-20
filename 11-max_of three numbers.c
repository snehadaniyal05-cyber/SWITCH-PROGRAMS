#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    switch(a>=b)
    {
        case 1:
            switch(a>=c)
            {
                case 1:
                    printf("%d is the largest number.",a);
                    break;
                case 0:
                    printf("%d is the largest number.",c);
                    break;
            }
            break;
        case 0:
            switch(b>=c)
            {
                case 1:
                    printf("%d is the largest number.",b);
                    break;
                case 0:
                    printf("%d is the largest number.",c);
                    break;
            }
            break;
    }
}