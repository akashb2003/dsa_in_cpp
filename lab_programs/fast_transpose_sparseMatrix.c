#include <stdio.h>
struct sparse
{
    int row; int col; int value;
};

struct sparse a[30];struct sparse b[30];

void FastTransSparse()
{
    int n = a[0].value,l=1;
    b[0].col = a[0].row; 
    b[0].row = a[0].col;
    b[0].value =n;
    
    int ar1[(a[0].col)] , ar2[(a[0].col)+1];
    
    for(int i=0; i<a[0].col;i++)
    {
        ar1[i]=0;
    }
    int coll;
    for(int i=1;i<=a[0].value;i++)
    {  
       coll= a[i].col; 
       ar1[coll]++;
    }
    
    ar2[0]=1;
    for(int i=1;i<a[0].col;i++)
    {
        ar2[i]=(ar2[i-1]+ar1[i-1]);
    }

    int ind;
    for(int i=1;i<=a[0].value;i++)
    {
    {
        ind = ar2[(a[i].col)]++;
        
            b[ind].col = a[i].row; 
            b[ind].row = a[i].col;
            b[ind].value = a[i].value;
            
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
    
    FastTransSparse();
    
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

