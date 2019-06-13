// Develop a program to solve simple computational problems using arithmetic expressions and use of each operator leading to simulation of commercial clculator
#include <stdio.h>
int main()
{
    int num1,num2,result;
    char op;
    printf("Enter the expression :\n");
    scanf("%d %c %d",&num1,&op,&num2);
    switch (op)
    {
        case '+':
            result=num1+num2;
            printf("Sum is %d",result);
            break;
        case '-':
            result=num1-num2;
            printf("Subtraction is %d",result);
            break;
        case '*':
            result=num1*num2;
            printf("Multiplication is %d",result);
            break;
        case '%':
            result=num1%num2;
            printf("Modulus is %d",result);
            break;
        case '/':
            if(num2==0)
            {
                printf("Divide by zero error");
                break;
            }
            else
            {
                result=num1/num2;
                printf("Division is %d",result);
                break;
            }
        default:
            printf("Invalid expression");
    }
    return 0;
}