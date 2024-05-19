#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter a String:");
    fgets(s,sizeof(s),stdin);
    for(int i=0,j;s[i]!='\0';i++)
    {  
       while(!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='A'&&s[i]<='Z')&&!(s[i]=='\0'))
        {
            for(j=i;s[j]!='\0';j++)
                s[j]=s[j+1];
            s[j]='\0';
        }
    }
    puts(s);
    return 1;
}