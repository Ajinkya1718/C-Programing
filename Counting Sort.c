#include<stdio.h>
#include<stdlib.h>
void countsort(int a[],int n)
{
    //Finds Max Value
    int max_value=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>max_value)
            max_value=a[i];
    
    /*Creating an array to store count of all nums 
    & max_value + 1 bcoz array starts from 0 */
    int count[max_value + 1];
    for(int i=0;i<=max_value;i++) //Initializing all value to 0 to get rid of garbage value
        count[i]=0;

    /*Reads value from a[] & increments value of present at count[] index*/
    for(int i=0;i<n;i++)
        count[a[i]]++;

    //Rewrites a[] array
    int index=0;
    for(int i=0;i<=max_value;i++)
        while(count[i]>0)
        {
            a[index++]=i;
            count[i]--;
        }
}
int main()
{
    int n,*a;
    printf("Enter the length of array:- ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the values in array:-\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    countsort(a,n);
    printf("\nPrinting the Sorted Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    free(a);
}