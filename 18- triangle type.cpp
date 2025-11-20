#include<stdio.h>
int main()
{
    int choice,a,b,c;
    printf("Enter sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Choose the type of triangle to check:\n1. Equilateral\n2. Isosceles\n3. Scalene\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            if(a==b && b==c)
                printf("The triangle is Equilateral.\n");
            else
                printf("The triangle is not Equilateral.\n");
            break;
        case 2:
            if(a==b || b==c || a==c)
                printf("The triangle is Isosceles.\n");
            else
                printf("The triangle is not Isosceles.\n");
            break;
        case 3:
            if(a!=b && b!=c && a!=c)
                printf("The triangle is Scalene.\n");
            else
                printf("The triangle is not Scalene.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}