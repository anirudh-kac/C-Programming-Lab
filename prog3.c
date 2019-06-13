// Develop a program to find reverse of a positive integer and check if it is a palindrome or not. Display appropriate messages
#include <stdio.h>
int main()
{
    int n,m,rev=0,digit;
    printf("Enter a number : \n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10 + digit;
        n=n/10;
    }

    if(rev==m)
    {
        printf("Number is a palindrome \n");
    }
    else
    {
        printf("Number is not a palindrome \n");
    }
    
    return 0;
} 