#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d",&choice);
    printf("Enter your choice (1-4): ");
    scanf("%d",&a,&b);
    switch(choice)
    {
        case 1:
            printf("Addition: %d\n",a+b);
            break;
        case 2:
            printf("Subtraction: %d\n",a-b);
            break;
        case 3:
            printf("Multiplication: %d\n",a*b);
            break;
        case 4:
            if(b!=0)
                printf("Division: %d\n",a/b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}