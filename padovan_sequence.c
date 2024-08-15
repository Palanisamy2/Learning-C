/*
                         PADOVAN SERIES

Padovan series is adds terms that are two p(2) and three p(3) places before the current term ".
FORMULA:"P(n)=p(n-2)+P(n-3)"

P(0)=1
P(1)=1
P(2)=1
P(3)=P(1)+P(0)=1+1=2
P(4)=P(2)+P(1)=1+1=2
P(5)=P(3)+P(2)=2+1=3
P(6)=P(4)+P(3)=2+2=4
P(7)=P(5)+P(4)=3+2=5
P(8)=P(6)+P(5)=4+3=7
.
.
.
Fibnoci series adds terms that are one p(1) and two p(2) places before the current term.
FORMULA:"P(n)=p(n-1)+P(n-2)"
*/
int main() {
    int n,i,p1 = 1, p2 = 1, p3 = 1, pcurrent = 1;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for (int i=3; i<=n; i++)
    {
        pcurrent = p1 + p2;
        p1 = p2;
        p2 = p3;
        p3 = pcurrent;
    }
        printf("\n%d",pcurrent );
 }
