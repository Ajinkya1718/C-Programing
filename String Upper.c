#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the String=");
    fgets(str,20,stdin);
    for(int i=0;str[i]!='\0';i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    printf("%s",str);
}