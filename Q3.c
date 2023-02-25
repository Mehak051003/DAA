//Jump Search
#include<stdio.h>
#include<math.h>
int jumpsearch(int arr[],int n,int key)
{
    int i=0,m;
    m=sqrt(n);
    while(arr[m]<=key && m<n)
    {
        i=m;
        m+=sqrt(n);
    }
    for(int x=i;i<=m;i++)
    {
        if(arr[i]==key)
            return x;
    }
    return -1;
}
void main()
{
    int a[100],n,key,res,i;
    printf("Enter limit of array ");
    scanf("%d",&n);
    printf("enter numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key element to be searched ");
    scanf("%d",&key);
    res = jumpsearch(a,n,key);
    if(res == -1)
        printf("Number is not present");
    else
        printf("number is present at index %d ",res);
}
