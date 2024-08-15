int main() {
    int n,i,f1=0,f2=1,f3=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf(" \n%d",f3);
    }
 }
