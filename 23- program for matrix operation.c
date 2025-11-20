#include<stdio.h>
int main()
{
    int choice,i,j,a[3][3],b[3][3],res[3][3];
    printf("Enter elements of first 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of second 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    printf("Choose operation:\n1.Addition\n2.Subtraction\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    res[i][j]=a[i][j]+b[i][j];
            printf("Resultant Matrix after Addition:\n");
            break;
        case 2:
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    res[i][j]=a[i][j]-b[i][j];
            printf("Resultant Matrix after Subtraction:\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}