#include<stdio.h>
int main()
{
    int choice,n,i,arr[100],sum=0,max,min;
    printf("Enter number of elements: ");   
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("1. Find Sum\n2. Find Maximum\n3. Find Minimum\n");
    printf("Enter your choice: ");
    {
        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                sum+=arr[i];
                printf("Sum = %d\n",sum);
                break;
            case 2:
                max=arr[0];
                for(i=1;i<n;i++)
                {
                    if(arr[i]>max)
                    max=arr[i];
                }
                printf("Maximum = %d\n",max);
                break;
            case 3:
                min=arr[0];
                for(i=1;i<n;i++)
                {
                    if(arr[i]<min)
                    min=arr[i];
                }
                printf("Minimum = %d\n",min);
                break;
            default:
                printf("Invalid choice\n");
    }
    return 0;
}