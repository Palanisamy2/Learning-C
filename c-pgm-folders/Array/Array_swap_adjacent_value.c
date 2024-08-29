#include<stdio.h>
int main()
{
    int a[50],i,n,x;
    printf("Enter total number of elements:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Enter array elements:");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i=i+2)
        {
            x=a[i];
        a[i]=a[i+1];
        a[i+1]=x;
        }
        printf("The elements in the given array after swapping:\n");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
    }
    else
        {
            printf("The n value must be even number");
        }
return 0;
}
