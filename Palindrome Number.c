//Palindrome Number
#include<stdio.h>
int main()
{
    int A,r,n;
    printf("Enter a number= ");
    scanf("%d",&n);
    A=n;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(A==r)
        printf("No. is palindrome");
    else
        printf("No. is not palindrome");        
}