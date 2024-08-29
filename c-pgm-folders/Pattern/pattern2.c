int main()
{
    int n,i,j,s;
    printf("Enter the value : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(s=i;s<=n;s++)
        {
          printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf(" %d",i);
        }

        printf("\n");
    }
    return 0;
}
