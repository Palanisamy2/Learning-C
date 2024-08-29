 /*

int main()
{
    int input,i,j,count=0,len ;
    int arr[5];
    printf("Enter the value : ");
    for(i=0;i<5
    ;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if (arr[i] == arr[j]  )
            {
                count++;
                    break;
            }
        }
    }
    printf("\n Total repeated value is : %d ",count);

}

*/

#include <stdio.h>
int main()
{
int arr[10], i, j, Size, count = 0;
printf("\n Enter Number : ");
scanf("%d", &Size);
printf("\n Please Enter %d elements of an Array : ", Size);
for (i = 0; i < Size; i++)
{
 scanf("%d", &arr[i]);
 }
for (i = 0; i < Size; i++)
{
 int t=0;
for(j = 0; j < Size; j++) {
 if(arr[i] == arr[j] && (i<j))
 {
 count++;
 break;
}
}
}
printf("%d ", count);

return 0;
}
