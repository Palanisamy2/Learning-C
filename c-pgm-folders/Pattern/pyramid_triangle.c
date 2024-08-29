int main()
{
    int n,i,j,s;
    printf("Enter value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}
