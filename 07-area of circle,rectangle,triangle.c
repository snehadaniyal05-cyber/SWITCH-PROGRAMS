#include<stdio.h>
int main()
{
    int choice;
    float area;
    float rad, len, breadth, base, height;
    const float PI = 3.14159;

    printf("Choose the shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &rad);
            if (rad > 0) {
                area = PI * rad * rad;
                printf("Area of Circle = %.2f\n", area);
            } else {
                printf("Invalid input!\n");
            }
            break;

        case 2:
            printf("Enter length of the rectangle: ");
            scanf("%f", &len);
            printf("Enter breadth of the rectangle: ");
            scanf("%f", &breadth);
            if (len > 0 && breadth > 0) {
                area = len * breadth;
                printf("Area of Rectangle = %.2f\n", area);
            } else {
                printf("Invalid input! \n");
            }
            break;

        case 3:
            printf("Enter base of the triangle: ");
            scanf("%f", &base);
            printf("Enter height of the triangle: ");
            scanf("%f", &height);
            if (base > 0 && height > 0) {
                area = 0.5 * base * height;
                printf("Area of Triangle = %.2f\n", area);
            } else {
                printf("Invalid input! Base and height must be positive.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select between 1 and 3.\n");
    }

    return 0;
}