//Develop a program to introduce 2D array manipulation and
//Implement matrix multipllication and ensure the rules of multiplication are checked
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],m,n,p,q,i,j,k;
    printf("Enter size of first matrix : \n");
    scanf("%d %d",&m,&n);
    printf("Enter size of second matrix : \n");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("Matrix Multiplication is not possible \n");
        exit(0);
    }
    printf("Enter elements of first matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix : \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }

    printf("Matrix a is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix b is : \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("Product of the matrices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}