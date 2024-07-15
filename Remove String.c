#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[50],w[50],line[20][20];
    int i=0,j=0,k=0,l,f;
    printf("Enter a String:");
    fgets(s,sizeof(s),stdin);
    printf("Enter a Word to remove:");
    scanf("%s",w);
    for(l=0;s[l]!='\0';l++);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            line[j][k]='\0';
            j++;
            k=0;
        }
        else
        {
            line[j][k]=s[i];
            k++;
        }
        line[j][k]='\0';
        if(atoi(&line[i][k])==w[i])
                {
                    printf("atoi woking");
                }
        for(i=0;i<=j;i++)
        {
            for(k=0;k<l;k++)
            {    if(atoi(&line[i][k])==w[i])
                {
                    k++;
                    f++;
                }
                if(f==l)
                {
                    line[i][0]='\0';
                    f=0;
                }

            }
        }
        for(i=0;i<j;i++)
        {
            if(line[i][0]!='\0')
                puts(&line[i][0]);
        }
    }

}