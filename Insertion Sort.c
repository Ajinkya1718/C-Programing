/*Compares current value with values behind current value
& shifts values to arrange them*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a;
    printf("Enter total no. of values: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the values in array:-\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i=1;i<n;i++)
    {
        int key=i;
        int value=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>value)
            {
                a[j+1]=a[j];
                key=j;
            }
        }
        a[key]=value;
    }
    printf("Displaying Sorted Value:-");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    free(a);
}