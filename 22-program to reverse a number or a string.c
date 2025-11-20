#include<stdio.h>
int main()
{
    int choice;
    printf("1.Reverse number\n 2.Reverse string\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            int num, rev=0, rem;
            printf("Enter an integer: ");
            scanf("%d",&num);
            while(num!=0)
            {
                rem=num%10;
                rev=rev*10+rem;
                num=num/10;
            }
            printf("Reversed number: %d\n",rev);
            break;
        }
        case 2:
        {
            char str[100], rev[100];
            int len=0, i, j;
            printf("Enter a string: ");
            scanf(" %[^\n]s",str);
            while(str[len]!='\0')
                len++;
            j=0;
            for(i=len-1;i>=0;i--)
            {
                rev[j]=str[i];
                j++;
            }
            rev[j]='\0';
            printf("Reversed string: %s\n",rev);
            break;
        }
        default:
            printf("Invalid choice\n");
    }
}