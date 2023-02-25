//Linear Search
#include<stdio.h>
int linearsearch(int arr[],int n,int key)
{
    int i,f;
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
           return i;
        }
    }
    return -1;
}
void main()
{
    int a[100],n,i,key,res;
    printf("Enter limit of array ");
    scanf("%d",&n);
    printf("enter numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key element to be searched ");
    scanf("%d",&key);
    res=linearsearch(a,n,key);
    if(res>=0)
    {
        printf("Number is present \n");
        printf("Total comparisions %d ", res+1);
    }
    else
    {
        printf("Number is not present \n");
        printf("Total comparisions %d ", res);
    }

}
