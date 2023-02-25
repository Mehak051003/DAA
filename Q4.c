#include<stdio.h>
int first(int arr[],int l,int h,int key,int n)
{
    int mid,c=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==key)
        {
            if(mid-1>=0 && arr[mid-1]==key)
            {
                h=mid-1;
                continue;
            }
            return mid;
        }
        else if(arr[mid]>key)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int last(int arr[],int l,int h,int key,int n)
{
    int mid,c=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==key)
        {
            if(mid+1<n && arr[mid+1]==key)
            {
                l=mid+1;
                continue;
            }
            return mid;
        }
        else if(arr[mid]>key)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
void main()
{
    int a[100],n,i,key,res1,res2,res,l=0,h;
    printf("Enter limit of array ");
    scanf("%d",&n);
    h=n-1;
    printf("enter numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key element to be searched ");
    scanf("%d",&key);
    res1=first(a,l,h,key,n);
    res2=last(a,l,h,key,n);
    res=res2-res1;
    if(res>0)
        printf("Total number of duplicate of key %d",res+1);
    else
        printf("No duplicate found");


}
