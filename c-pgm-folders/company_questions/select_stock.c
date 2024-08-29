int main()
{
    int n,n1,i,temp=0;
    printf("Enter the size : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
     printf("\nEntered number is ordered to show : ");
     for(int i=0;i<n;i++)
     {
         printf("%d",arr[i]);
     }
    printf("\nEnter the number to show : ");
    scanf("%d",&n1);
    int result = arr[n1-1];
    printf("called value is : %d",result);
}
