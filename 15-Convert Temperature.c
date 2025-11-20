#include<stdio.h>
int main()
{
    int choice;
    fload celsius, fahrenheit;
    printf("Choose the conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: printf(Enter temperature in celcius:);
                scanf("%f", &celsius);
                fahrenheit = (celsius * 9/5) + 32;
                printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
                break;
        case 2: printf("Enter temperature in Fahrenheit: ");
                scanf("%f",&fahrenheit);
                celcius = (fahrenheit - 32)* 5/9;
                printf("Temperature in celcius: %.2f\n", celcius);
                break;
        default: printf("INVALID CHOICE\n");
        }
        retuen 0;
}