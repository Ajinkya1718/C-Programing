#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    int i,j;
    printf("Enter 2 Strings= ");
    scanf("%s%s",s1,s2);
    for(i=0;s1[i]!='\0';i++); //Calculates length of s1
    for(j=0;s2[j]!='\0';j++); //Calculates length of s2
    for(int k=0;k<j;k++,i++) // Loop starts at end of s1 upto end of s2
        s1[i]=s2[k];
    s1[i]='\0';  
    printf("%s",s1);
}
/* At line 12, some times compiler doesn't
   read the Null character ('\0')
   so we just have to assign the last 
   index postion as null character ('\0')  */