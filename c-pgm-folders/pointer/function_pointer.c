void kumki();
void kompan();
int main()
{
    void  (*funcptr)();
    funcptr = kumki;
    funcptr();
    funcptr = kompan;
    funcptr();
    return 0;
}

void kumki()
{
    printf("\n Welcome to our great show kumki yanai");
}

void kompan()
{
    printf("\n Welcome to our great show kompan yanai");
}
