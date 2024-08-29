int main()
{
    int fill_number,result,even=0,odd=0;
    printf("Enter the bill :");
    scanf("%d",&fill_number);
    while(fill_number != 0)
    {
        int val = fill_number%10;
        if(val % 2 ==0)
        {
            even =even+val;
        }
        else
        {
            odd = odd+val;
        }
         fill_number=fill_number/10;
    }
    result = even*odd;
    printf("the discount is : %d",result);

}
/*
#include <stdio.h>
int main() {
 int n, r=0;
 int diff =0;
 int even=0;
 int odd=0;
 scanf("%d",&n);
 while(n != 0){
 r = n%10;
 if(r % 2 == 0) {
 even+=r;
 } else {
 odd+=r;
 }
 n/=10;
 }
 diff=odd*even;
 printf("%d",diff);
 return 0;
}
*/
