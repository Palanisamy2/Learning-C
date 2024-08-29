/*
int main()
{
    int row,column,i,j,len;
    printf("enter the input size of row : ");
    scanf("%d",&row);
    printf("enter the input size of column : ");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter the matrix : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("Enter the matrix : ");
        for(i=0;i<row;i++)
            {
                printf("\n");
                for(j=0;j<column;j++)
                {
                    printf("%d ",arr[i][j]);
                    }
                    }
}
*/

#include <stdio.h>
#include <string.h>

int main()
{
  	char naveen[100];
  	int i, len;

  	printf("\n Please Enter any String :  ");
  	gets(naveen);

  	len = strlen(naveen);
  	for(i = len - 1; i >= 0; i--)
	{
		if(naveen[i] == ' ')
		{
			naveen[i] = '\0';
			printf("%s ", &(naveen[i]) + 1);
		}
	}
	printf("%s", naveen);

  	return 0;
}
