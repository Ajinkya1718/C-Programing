#include<stdio.h>
#include<stdlib.h>
void colmemory(int **a,int col)
{
        for(int i=0;i<col;i++)
            a[i]=(int *)calloc(col,sizeof(int));
}
void pfree(int **a,int row)
{
    for(int i=0;i<row;i++)
        free(a[i]);
    free(a);
} 
void pscan(int **a,int row,int col)
{
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);
}
void print(int **a,int row,int col)
{
    for(int i=0;i<row;i++)
    {    
        for(int j=0;j<col;j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }
}
int main()
{
    int **a,**b,**c,row,col,i,j;
    printf("Enter value of rows & columns= ");
    scanf("%d%d",&row,&col);
    if(row==col)
    {
        a=(int **)calloc(row,sizeof(int *));
        b=(int **)calloc(row,sizeof(int *));
        c=(int **)calloc(row,sizeof(int *));
        colmemory(a,col);
        colmemory(b,col);
        colmemory(c,col);
        
        printf("Enter elements for Matrix A\n");
        pscan(a,row,col);
        printf("Enter elements for Matrix B\n");
        pscan(b,row,col);
        
        printf("Printing Matrix A\n");
        print(a,row,col);
        printf("Printing Matrix B\n");
        print(b,row,col);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                c[i][j]=a[i][j]+b[i][j];
        }
        printf("Printing Matrix C\n");
        print(c,row,col);

        for(int i=0;i<row;i++)
            free(a[i]);
        free(a);
        for(int i=0;i<row;i++)
            free(b[i]);
        free(b);
        for(int i=0;i<row;i++)
            free(c[i]);
        free(c);

        return 1;
    }
}