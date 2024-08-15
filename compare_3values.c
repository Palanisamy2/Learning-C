#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
        printf("Enter value of a : \n");
        scanf("%d",&a);
        printf("Enter value of b : \n");
        scanf("%d",&b);
        printf("Enter value of c : \n");
        scanf("%d",&c);
        if(a>b) {
            if(a>c) {
                printf("a is greater value");
            }
        }
        if(b>c) {
            if(b>a) {
                printf("b is greater value");
            }
        }
        if(c>a) {
            if(c>b) {
                printf("c is greater value");
            }
        }
    return 0;
}
