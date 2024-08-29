int main()
{
    int n,length;
    printf("Input size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the input : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    length=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<length;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("minimum value is : %d",min);
}
