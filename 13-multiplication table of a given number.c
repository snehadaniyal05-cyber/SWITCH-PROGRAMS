#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:  ")
    scanf("%d",%num);
    
    for(int i=1; i<=0; i++)
       printf("%d*%d=%d\n",num,i,num*i);
    return 0;
}