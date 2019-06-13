// Develop a program to compute sinx using taylor series approximation and compare with built in function
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    int n,i;
    float sum=0,term=0,deg,x;
    printf("Enter the angle in degrees : \n");
    scanf("%f",&deg);
    x=deg*PI/180;
    printf("In radians : %f",x);
    sum=x;
    term=x;
    printf("Enter number of terms (say n)\n");
    scanf("%d",&n);
    for(i=3;i<n;i+=2)
    {
        term=-(term*x*x)/((i-1)*i);
        sum+=term;
    }

    printf("User defined function sin(%f) = %f \n",deg,sum);
    printf("In built function sin(%f) = %f\n",deg,sin(x));
    return 0;
}