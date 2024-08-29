int main()
{
    struct student
    {
        char name[50];
        int regno;
        int science;
        int maths;
        int language;
        float average;
        char grade;
        int total;


    };

    int no;
    struct student std[100];
    printf("Enter number of student : ");
    scanf("%d",&no);
    for(int i=0; i<no;i++)
    {
        printf("\nEnter student name :");
        scanf("%s",std[i].name);
        printf("\nEnter student register number :");
        scanf("%d",&std[i].regno);
        printf("\nEnter student science mark :");
        scanf("%d",&std[i].science);
        printf("\nEnter student maths mark :");
        scanf("%d",&std[i].maths);
        printf("\nEnter student language mark :");
        scanf("%d",&std[i].language);
    }

    for(int i=0; i<no;i++)
    {
        printf("\nEnter student name : %s",std[i].name);
        printf("\nEnter student register number : %d",std[i].regno);
        printf("\nEnter student science mark : %d",std[i].science);
        printf("\nEnter student maths mark : %d",std[i].maths);
        printf("\nEnter student language mark : %d",std[i].language);

        std[i].total = std[i].science +  std[i].maths + std[i].language;
        printf("\nStudent total mark is : %d",std[i].total);

        std[i].average = ( std[i].total ) / 3;
        printf("\nThe average mark is : %.2f",std[i].average);

        if(std[i].total<=150)
        {
            printf("\nThe student result is FAIL");
        }
        else
        {
             printf("\nThe student result is PASS");
        }

        if(std[i].average<50)
        {
            printf("\nThe student grade is U ");
        }
        else if (std[i].average<60)
        {
            printf("\nThe student grade is C ");
        }
        else if (std[i].average<70)
        {
         printf("\nThe student grade is B ");
        }
        else if (std[i].average<80)
        {
            printf("\nThe student grade is B+ ");
        }
        else if (std[i].average<90)
        {
            printf("\nThe student grade is A ");
        }
        else
        {
             printf("\nThe student result is A+");
        }
            printf("\n");
    }

}
