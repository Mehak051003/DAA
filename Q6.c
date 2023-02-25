#include<stdio.h>
void main()
{
    int a[20],i,j,c=0,key,n;
    printf("Enter limit of array ");
    scanf("%d",&n);
    printf("enter numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key element ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i] - a[j]== key)
                c++;
        }
    }
    printf("%d",c);
}
