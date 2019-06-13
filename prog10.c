// Develop a program to sort given n numbers using bubble sort
#include <stdio.h>
int main()
{
    int i,j,n,a[50],temp;
    printf("Enter number of elements : \n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("The sorted array is : \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;

}