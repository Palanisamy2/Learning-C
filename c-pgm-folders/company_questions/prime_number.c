int main () {
 int n,i,flag=0;
 printf("Enter values:");
 scanf("%d",&n);
 for(i=2;i<=n;i++) {
if (n%i==0) {
    flag=1;
    break;
    }
    else {
        flag=0;
    }
     }
     if(flag==1) {
        printf("prime number");
     }
     else {
        printf("not prime number");
     }
 }
