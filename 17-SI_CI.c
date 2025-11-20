include<stdio.h>
int main()
{

    int choice;
    float p,r,t,si,ci;
    printf("1. Simple Interest\n 2. Compound Interest\n");
    printf("Enter your coice");
    scanf("%d",&choice);
    printf("Enter principlal, rate and time");
    scanf("%f%f%f",&p,&r,&t);
    switch(choice)
    {
        case 1: si=(p*r*t)/100;
              printf("Simple interest is %f",si);
              break;
        case 2: ci=p* pow(1+r/100,t-p);
              printf("Compound interest is %f",ci);
              break;
        default: printf("INVALID CHOICE");
    }
    return 0;
}