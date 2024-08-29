/*
int main()
{
    int i,length;
    char n[100],temp;
    printf("Enter the word : ");
    scanf("%s",n);
    length = strlen(n);
    for(i=0;i<length/2;i++)
    {
        temp = n[i];
        n[i] = n[length-i-1];
        n[length-i-1] = temp;
    }
    printf("%s",n);
    return 0;
}
*/

int main()
{
    int i,length;
    char n[100];
    printf("Enter the word : ");
    scanf("%s",n);
    printf("%s",strrev(n));
    return 0;

}
