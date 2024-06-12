#include<stdio.h>
#include<stdlib.h>
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot && !(a[j]==a[i]))
        {
            i++;
            //swaping
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    i++;
    //swaping pivot-1 with pivot
    int temp=a[i];
    a[i]=pivot;
    a[high]=temp;
    return i; // pivot index 
}
void Quicksort(int a[],int low,int high)
{
    if(low < high)
    {
        int pidx= partition(a,low,high);

        Quicksort(a,low,pidx-1); // For Lower values
        Quicksort(a,pidx+1,high); //For Larger values
    }
}

int main()
{
    int *a,n;
    printf("Enter total no. of elements in Array: ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    //scaning
    printf("\nInsert Values in Array:-");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    Quicksort(a,0,n-1);

    //print
    printf("\nSorted Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    free(a);
}