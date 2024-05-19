// Find length of charcaters,vowels,consonants,digits & white space
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[20],ch;
    int i,d=0,v=0,c=0,ws=0;
    printf("\nEnter the String=");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
            d++;
        if(str[i]==' ')
            ws++;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
           ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            v++;
        if(str[i]>='a' && str[i]<='z' ||
            str[i]>='A' && str[i]<='Z')
                c++;
    }
    printf("\nTotal Characters=%d"
            "\nDigits=%d"
            "\nWhite-Space=%d"
            "\nVowel=%d"
            "\nConsonants=%d",i-1,d,ws,v,c);
}