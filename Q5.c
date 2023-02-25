#include<stdio.h>
void main()
{
    int arr[100],i,j,k,n,i1,j1,k1,f=0;
    printf("Enter limit of array ");
    scanf("%d",&n);
    printf("enter numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((arr[i]+arr[j])== arr[k])
                {
                    i1=i;
                    j1=j;
                    k1=k;
                    f=1;
                    break;
                }
            }
        }
    }
    if(f==1)
        printf("%d %d %d ",i1+1 , j1+1, k1+1);
    else
        printf("No sequence found");
}
