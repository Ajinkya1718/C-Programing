#include<stdio.h>
void fibo(int n1,int n2,int c)
{
    int n3;
    if(c>0)
    {
        n3=n1+n2;
        printf("\n%d",n3);
        n1=n2;
        n2=n3;
        fibo(n1,n2,c-1);
    }
}
int main()
{
    int c;
    printf("Enter the total count of Fibo numbers needed:");
    scanf("%d",&c);
    printf("%d\n%d",0,1);
    fibo(0,1,c-2);
    return 1;
}