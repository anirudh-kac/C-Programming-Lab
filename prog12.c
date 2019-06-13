// Student data
#include <stdio.h>
struct student
{
    int USN;
    char name[20];
    int mark[4];
};

int main()
{
    int i,j,n,sum,avg[20],average=50;
    printf("Enter number of students: \n");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter student details : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter student name : \n");
        scanf("%s",s[i].name);
        printf("Enter student USN: \n");
        scanf("%d",&s[i].USN);
        printf("Enter student marks : \n");
        sum=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&s[i].mark[j]);
            sum+=s[i].mark[j];
        }
        avg[i]=sum/4;
    }
    printf("Average marks are %d \n",average);
    printf("Students above average are:\n");
    printf("USN \t Name \n ");
    for(i=0;i<n;i++)
    {
        if(avg[i]>=average)
        {
            printf("%d \t%s\n",s[i].USN,s[i].name);
        }
    }


    printf("Students below average are:\n");
    printf("USN \t Name \n ");
    for(i=0;i<n;i++)
    {
        if(avg[i]<average)
        {
            printf("%d \t%s\n",s[i].USN,s[i].name);
        }
    }

    return 0;

}
