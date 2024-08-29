/* int main()
{
    int i=10;
    int *p=&i;
    printf("\n pointer p before address is : %u",p);// 6422300
    printf("\n pointer p after address is : %u",&p);// 6422296
    printf("\n pointer p value is : %u",*p);// 10
        return 0;
}
*/

/*
int main()
{
    int i=20;
    int *p1=&i;
    *p1=100;

    printf("\n pointer p before address is : %u",p1);// 6422300
    printf("\n pointer p after address is : %u",&p1);// 6422296
    printf("\n pointer p value is : %u",*p1);// 100
        return 0;
}
*/

int main()
{
    int a=5,b=10;
    swap(&a, &b);
    printf("\n a value after swap : %d",a);// 6422300
    printf("\n b value after swap : %d",b);// 6422296
    return 0;
}
swap(int *x,int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
