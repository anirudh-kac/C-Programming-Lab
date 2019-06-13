/* Introduce 1D array manipulation and 
introduce binary search */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20],n,i,high,low,mid,key;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to find : \n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("Element found at position %d \n",mid+1);
            exit(0);
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    printf("Unsuccessful search \n");
    return 0;
}