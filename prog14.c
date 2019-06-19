// Decimal to binary conversion using recursive function
#include <stdio.h>
int bintodec(int binarynum)
{
    if(!(binarynum/10))
        return(binarynum);
    return (binarynum%10 + bintodec(binarynum/10) *2);
}

int main()
{
    int binarynum;
    printf("Enter the binary number : \n");
    scanf("%d",&binarynum);
    printf("Decimal  equivalent is %d\n",bintodec(binarynum));
    return 0;
}
