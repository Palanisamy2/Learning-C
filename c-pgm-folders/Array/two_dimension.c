int main()
{
    int n,i,j,length;
    printf("enter the matrix size :");
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     printf("Enter the matrix arr \n");
     for(i=0;i<n;i++)
     {

         for(j=0;j<n;j++)
         {
             printf("%d ",arr[i][j]);
         }
         printf("\n");
     }
}
