int main()
{
    int i,n;
    printf("enter array size : ");
    scanf("%d",&n);
    int arr[n];

    if(n%2==0)
    {
         for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i=i+2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    printf("value after swape : \n");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
     }
    else
        printf("give an odd number to swape value!!! \n");
        int length = sizeof(arr)/sizeof(arr[0]);
    printf("\n the size of array is : %d",length);
}
