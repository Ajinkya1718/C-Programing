#include<stdio.h>
#include<stdlib.h>

void print(int **a,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

void pfree(int **a,int r)
{
    for(int i=0;i<r;i++)
        free(a[i]);
    free(a);
}

void colmemory(int **a,int r,int c)
{
    for(int i=0;i<r;i++)
        a[i]=(int *)calloc(c,sizeof(int));
}
int main()
{
    int i,j,**a,**b,r,c;
    printf("Enter no. of rows & columns:");
    scanf("%d%d",&r,&c);
    a=(int **)calloc(r,sizeof(int *));
    b=(int **)calloc(c,sizeof(int *));

    colmemory(a,r,c);
    for(i=0;i<r;i++)
        a[i]=(int *)calloc(c,sizeof(int)); // try sizeof(int *) if incompatible output

    for(j=0;j<c;j++)
        b[j]=(int *)calloc(r,sizeof(int)); 

    printf("Scaning Matrix A\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    printf("\nPrinting Matrix A:\n");
    print(a,r,c);

    printf("\nTransposing Martix A\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            b[j][i] = a[i][j];
    }

    print(b,c,r);

    pfree(a,c);
    pfree(b,r);

    return 1;
}