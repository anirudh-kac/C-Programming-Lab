// Develop a program to find the square root of a given number N
#include <stdio.h>
int main()
{
    float n,temp,sqroot;
    printf("Enter the number: \n");
    scanf("%f",&n);
    sqroot=n/2;
    temp=0;
    while(temp!=sqroot)
    {
        temp=sqroot;
        sqroot=(n/sqroot+sqroot)/2;
    }
    printf("The square root of the number is %f \n",sqroot);
    return 0;
}
