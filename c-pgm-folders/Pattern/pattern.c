#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s;
    printf("Enter number : ");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for(s=i;s<=n;s++)
        {
            printf(" ");
        }//s
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }//j--
        printf("\n");
    }//i--
    return 0;
}
