#include<stdio.h>
void reverse(char *s,int len)
{
    for(int i=0;i<len;i++,len--)
    {
        char temp=s[i];
        s[i]=s[len-1];
        s[len-1]=temp;
    }
    printf("\n%s",s);
}
int main()
{
    char s[20];
    int i;
    printf("Enter the String:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++); // Calculates length of string
    reverse(s,i);
}