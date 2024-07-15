// Uses swaping to arrange value in array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i,j;
    printf("Enter total no. of array values:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("\nEnter values in array:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nSorting Array in Ascending Order:-\n");
    
    /*Pass should be n-1 so i=1*/
    for(i=1;i<n;i++)
    {
        int swap=0;
        /*Since during each pass 1 value is sorted it is skipped
        next time*/
        for(j=0;j<n-i;j++)
            /*For descending a[j]<a[j+1]*/
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                swap=1;
            }
        /*Used to stop unnecessary running of bubble sort algo*/
        if(!swap)
            break;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    free(a);
}
