//Calculate sum,mean,variance and standard deviation using pointers
#include <stdio.h>
#include <math.h>
int main()
{
    float a[20],*ptr,sum=0,sumstd=0,var,std,mean;
    int i,n;
    printf("Enter number of elements : \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++)
    {
        sum+=*ptr;
        ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd=sumstd+pow((*ptr-mean),2);
        ptr++;
    }
    var=sumstd/n;
    std=sqrt(var);
    printf("Sum is %f :\n",sum);
    printf("Mean is %f :\n",mean);
    printf("Variance is %f :\n",var);
    printf("Standard deviation is %f :\n",std);
    return 0;

}