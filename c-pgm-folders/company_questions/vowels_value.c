int main()
{
    int i,count=0;
    char n[100],ch;
    printf("Enter the word : ");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
    {
        ch = tolower(n[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
             count++;
        }
    }
    printf("%d",count);
}
