//Binary Search
#include<stdio.h>
int binarysearch(int arr[],int l,int h,int key)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]<key)
            l=mid+1;
        else
            h=mid-1;
    }
    return -1;

}
void main()
{
    int a[100],n,i,l=0,h,res,key;
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
    res = binarysearch(a,l,h,key);
    if(res == -1)
        printf("Number is not present");
    else
        printf("number is present at index %d ",res);
}
