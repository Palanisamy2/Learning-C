int main()
{
    char input_encrypt[100],input_decrypt[100];
    int result;
    printf("Enter input as encrypt : ");
    scanf("%s",&input_encrypt);
    printf("Enter input as decrypt : ");
    scanf("%s",&input_decrypt);
    int length1 = strlen(input_encrypt);
    int length2 = strlen(input_decrypt);
    for(int i=0;i<length1;i++)
    {
        int flag=0;
        for(int j=0;j<length2;j++)
        {
            if(input_encrypt[i]==input_decrypt[i])
            {
                int flag=1;
                break;
            }
        }

    }

}

/* // mam code
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    int  Total1 = 0;
    int  Total2 = 0;
    int i;
    int l1,l2,len;

    printf("Enter the  string1: ");
    scanf("%s", s1);
    printf("Enter the  string2: ");
    scanf("%s", s2);
    l1=strlen(s1);
    l2 = strlen(s2);

    if(s1>s2)
        len=l1;
    else
        len=l2;

    for (i = 0; i < len; i++) {
         Total1 += s1[i];
         Total2 += s2[i];
    }

    int intChar =  Total1 -  Total2;
    char extraChar = (char)intChar;

    printf("The extra character is: %c\n", extraChar);

    return 0;
}
*/
