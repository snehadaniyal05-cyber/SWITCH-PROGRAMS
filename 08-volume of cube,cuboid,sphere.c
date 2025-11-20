#include<stdio.h>
int main()
{
    int choice;
    float len,breadth,height,rad,area,volume;
    printf("choose theshape of the object\n");
    printf("1.cube\n");
    printf("2.cuboid\n");
    printf("3.sphere\n");
    printf("Enter yur choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the length of the cube\n");
            scanf("%f",&len);
            volume=len*len*len;
            printf("Volume of cube is %.2f\n",volume);
            break;
        case 2:
            printf("Enter the length, breadth and height of the cuboid\n");
            scanf("%f%f%f",&len,&breadth,&height);
            volume=len*breadth*height;
            printf("Volume of cuboid is %.2f\n",volume);
            break;
        case 3:
            printf("Enter the radius of the sphere\n");
            scanf("%f",&rdd);
            volume=(4/3.0)*3.14*rad*rad*rad;
            printf("Volume of sphere is %.2f\n",volume);
            break;
        default:
            printf("Invalid choice\n");
    }

}