//Displaying Array using Double Pointer
#include<stdio.h>

int main()
{
    int i,**a,*b,array[5];
    printf("Enter any 5 elements in array: ");
    for(i=0;i<5;i++)
        scanf("%d",&array[i]);
    b=array;
    a=&b;
    for(i=0;i<5;i++)
        printf(" %d",*(*a+i));
}