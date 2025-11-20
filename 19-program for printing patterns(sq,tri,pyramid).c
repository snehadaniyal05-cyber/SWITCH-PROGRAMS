#include<stdio.h>
int main()
{
    int choice,i,j,n;
    printf("1.square\n 2.triangle\n 3.pyramid\n\nEnter your choice: ");
    scanf("%d",&choice);
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    switch(choice)
    {
        case 1:
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        case 2:
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        case 3:
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n-i;j++)
                {
                    printf(" ");
                }
                for(j=1;j<=(2*i-1);j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}