// Develop a program to compute the roots of a quadratic equation by accepting the coefficients . Print appropriate messages
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("Enter the coefficients : \n");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        x1=x2=(-b)/(2*a);
        printf("Roots are equal \n");
        printf("x1= %f and x2 =%f",x1,x2);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct\n");
        printf("x1= %f and x2 =%f",x1,x2);
        
    }
    else
    {
            x1=-b/(2*a);
            x2=sqrt(fabs(d))/(2*a);
            printf("Roots are complex \n");
            printf("x1 = %f+i%f \n",x1,x2);
            printf("x1 = %f-i%f \n",x1,x2);
    }
    
    return 0;
}