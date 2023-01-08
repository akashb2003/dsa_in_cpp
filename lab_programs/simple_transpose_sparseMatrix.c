#include <stdio.h>
struct sparse
{
    int row; int col; int value;
};

struct sparse a[30];struct sparse b[30];

void TransSparse(struct sparse a[],struct sparse b[])
{
    int n = a[0].value,l=1;
    b[0].col = a[0].row; 
    b[0].row = a[0].col;
    b[0].value =n;
    
    for(int i=0;i<a[0].col;i++)
    {
        for(int j=1;j<=n;j++)
    {
        if(a[j].col==i)
        {
            b[l].col = a[j].row; 
            b[l].row = a[j].col;
            b[l].value = a[j].value;
            l++;
        }
    }
    }
}

int main()
{
    int mat[10][10],m,n,count=0,l=1;
    printf("Enter the num of rows and colums\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elemnts\n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d", &mat[i][j]);
    
    printf("\nmatrix is\n");
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    printf("%d ", mat[i][j]);
    printf("\n");
    }
    
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    { if(mat[i][j]!=0)
    {    count++;
         a[l].row = i; 
         a[l].col = j;
         a[l].value = mat[i][j];
         l++;
    }
    }
    }
    
         a[0].row = m; 
         a[0].col = n;
         a[0].value = count;
    
    TransSparse(a,b);
    
    printf("\nsparse matrix is\n");
    for(int i=0;i<=count;i++)
    {
    printf("%d %d %d", a[i].row, a[i].col, a[i].value);
    printf("\n");
    }
    
    printf("\ntranspose of a sparse matrix is\n");
    for(int i=0;i<=count;i++)
    {
    printf("%d %d %d", b[i].row, b[i].col, b[i].value);
    printf("\n");
    }
    
    return 0;
}

