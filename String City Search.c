#include<stdio.h>
int main()
{
    char str[50][50],s[50];
    int n,i,j,max=0,c,l,k;
    printf("Enter total no. cities=");
    scanf("%d",&n);
    printf("Enter the string=");
    for(int i=0;i<n;i++)
    {   
        scanf("%s",str[i]);
        for(j=0;str[i][j]!='\0';j++);
        if(j>max)
            max=j;
    }
    do
    {
        printf("\n1.Search for City"
                "\n2.Display the longest City Name"
                "\n3.Exit\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("\nEnter the City to Search=");
            scanf("%s",s);
            for(k=0;s[k]!='\0';k++); // Counting length of String to Search 
            for(i=0;i<n;i++)
                for(j=0;str[i][j]!='\0';j++)
                {    
                    if(str[i][j]==s[j])
                    {
                        l++;
                        if(l==k)
                        {
                            printf("\nCity Found at %d index",i+1);
                            break;
                        }
                    }
                    else
                        l=0;   
                }
            break;
        case 2:
            for(i=0;i<n;i++)
            {
                for(j=0;str[i][j]!='\0';j++);
                if(j==max)
                    printf("\n%s",str[i]);
            }
            break;
        }
    } 
    while (c<3 && c>0);   
}