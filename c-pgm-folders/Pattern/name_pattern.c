int main()
{
    int i,j,n;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 ||i==n%2 || j==1  )
            {
                printf(" * ");
            }

            else
            {
                 printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
