#include<stdio.h>
int main()
{
    int choice,i,v=0,c=0,d=0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("1. Count Vowels\n2. Count Consonants\n3. Count Digits\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                {
                    v++;
                }
            }
            printf("Number of Vowels: %d\n",v);
            break;
        case 2:
            for(i=0;str[i]!='\0';i++)
            {
                if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
                {
                    if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                         str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
                    {
                        c++;
                    }
                }
            }
            printf("Number of Consonants: %d\n",c);
            break;
        case 3:
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]>='0'&&str[i]<='9')
                {
                    d++;
                }
            }
            printf("Number of Digits: %d\n",d);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}