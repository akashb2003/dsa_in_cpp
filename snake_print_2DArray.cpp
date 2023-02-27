#include<iostream>
using namespace std;

int main() 
{
    int m=4, n=3, i=0, j=0, tot = m*n;
    int a[m][n]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    for(i=0;i<n;i++)
    {
        if(i%2==0){
        for(j=0;j<m;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
        }

        else{
        for(j=m-1;j>=0;j--)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
        }
    }
    


    return 0;
}
