#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i,j;
    printf("Enter total no. of values:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter the values in array:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        int min_index=i,swap=0;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min_index])
            {
                min_index=j;
                swap=1;
            }
        if(swap)
        {
            int t=a[i];
            a[i]=a[min_index];
            a[min_index]=t;
        }
        else
            break;
    }
    
    printf("\nSorted Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    free(a);
}