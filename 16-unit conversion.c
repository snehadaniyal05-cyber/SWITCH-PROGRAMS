#include<stdio.h>
int main()
{
    int choice;
    float km,m,cm;
    printf("1. kilo meter to meter\n 2. meter to centimeter\n Enter choice: ");
    scanf("%d",&choice);
    switch(choice)  
    {
        case 1:
            printf("Enter distance in kilometer: ");
            scanf("%f",&km);
            m=km*1000;
            printf("Distance in meter: %.2f m\n",m);
            break;
        case 2:
            printf("Enter distance in meter: ");
            scanf("%f",&m);
            cm=m*100;
            printf("Distance in centimeter: %2f cm\n",cm);
            break;
        default:
            printf(INVALID CHOICE\n);
    }
    return 0;
}