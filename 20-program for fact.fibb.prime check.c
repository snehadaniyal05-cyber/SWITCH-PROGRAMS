#include<stdio.h>
int main()
[
    int choice,n,i,fact=1,a=0,b=1,c,flag=0;
    printf("Menu:\n1. Factorial\n2. Fibonacci Series\n3. Prime Check\nEnter your choice: ");
    scanf("%d",&choice);
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(choice)
    {
        case 1:
            for(i=1;i<=n;i++)
                fact=fact*i;
            printf("Factorial of %d is %d\n",n,fact);
            break;
        case 2:
            printf("Fibonacci Series up to %d terms:\n",n);
            for(i=1;i<=n;i++)
            {
                if(i==1)
                {
                    printf("%d ",a);
                    continue;
                }
                if(i==2)
                {
                    printf("%d ",b);
                    continue;
                }
                c=a+b;
                a=b;
                b=c;
                printf("%d ",c);
            }
            printf("\n");
            break;
        case 3:
            if(n<=1)
                flag=1;
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("%d is a prime number\n",n);
            else
                printf("%d is not a prime number\n",n);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
]