// Using functions , implement various string manipulation functions
#include <stdio.h>
#include <stdlib.h>

int comparestrings(char string1[],char string2[])
{
    int i,len1,len2,count=0;
    len1=findlength(string1);
    len2=findlength(string2);
    if(len1!=len2)
        return 1;
    for(i=0;i<len1;i++)
    {
        if(string1[i]==string2[i])
            count++;
    }
    if(count==len1)
        return 0;
    return 1;
}
void joinstrings(char string1[],char string2[])
{
    int i ,len1,len2;
    len1=findlength(string1);
    len2=findlength(string2);
    for(i=len1;i<len1+len2;i++)
    {
        string1[i]=string2[i-len1];
    }
    string1[i]='\0';
}

int findlength(char string[])
{
    int count=0,i;
    for(i=0;string[i]!='\0';i++)
        count++;
    return count;
}

int main()
{
    char string1[20],string2[20];
    int choice;
    while(1)
    {
        printf("1. Find Length \n 2. Join Strings \n 3. Compare strings\n 4. Exit \n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Enter the string: \n");
                scanf("%s",string1);
                printf("The length of the string is %d\n",findlength(string1));
                break;
            case 2:
                printf("Enter the first string: \n");
                scanf("%s",string1);
                printf("Enter the second string: \n");
                scanf("%s",string2);
                joinstrings(string1,string2);
                printf("The joined string is %s \n",string1);
                break;
            case 3:
                printf("Enter the first string: \n");
                scanf("%s",string1);
                printf("Enter the second string: \n");
                scanf("%s",string2);
                if(comparestrings(string1,string2)==0)
                    printf("They are equal\n");
                else
                    printf("They are not equal \n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice \n");
        }
    }

    return 0;
}