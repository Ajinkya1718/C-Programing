//Passing an array to function & calculating average using pointer
#include<stdio.h>

int avg(int a[5])
{
    int sum,*p=a,i;
    for(i=0;i<5;i++,p++)
        sum+=*p;
    return sum/5;
}
int main()
{
    int i,a[5];
    printf("Enter any 5 elements in array: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Average of 5 numbers= %d",avg(a));

    return 1;
}