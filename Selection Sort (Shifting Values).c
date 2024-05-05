#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,i,j,k;
    printf("Enter total no. of values in array:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter the values in array:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        int min_index=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min_index])
                min_index=j;
        
        int min_value=a[min_index];
        for(k=min_index;k>i;k--)
            a[k]=a[k-1];

        a[i]=min_value;
    }

    printf("\nSorted Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    free(a);
}