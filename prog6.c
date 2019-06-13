// Implement using functions if a number is prime or not

#include <stdio.h>
int isprime(int n);
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);
    if(isprime(n))
    {
        printf("Number is prime \n");
    }
    else
    {
        printf("Number is not prime");
    }
    return 0;
} 

int isprime(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}