int minimum(int arra[],int size)
{
    int min = arra[0];
    for(int i=0;i<size;i++)
    {
        if(min>arra[i])
            min = arra[i];
    }
    return min;
}
int maximum(int arra[],int size)
{
    int max = arra[0];
    for(int i=0;i<size;i++)
    {
        if(max>arra[i])
            max = arra[i];
    }
    return max;
}

int main()
{
    int length,i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arra[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    printf("Entered array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arra[i]);
    }
    printf("\n");
    length = sizeof(arra)/sizeof(arra[0]);
    int min = minimum(arra,n);
    int max = maximum(arra,n);
    printf("the minimum value is : %d",min);
       printf("the minimum value is : %d",max);
}
