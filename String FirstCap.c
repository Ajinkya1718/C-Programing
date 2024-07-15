#include<stdio.h>
#include<string.h>
void iscap(char *s,int len)
{
    for(int i=0;i<len;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            printf("First Capital Letter is at %d index",i);
            break;
        }
    }
}
int main()
{
    char s[20];
    int i;
    printf("Enter the String:");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++);
    iscap(s,i);
}