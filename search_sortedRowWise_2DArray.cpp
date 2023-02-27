#include<iostream>
using namespace std;

int main() 
{
    int m=4, n=3, i=0, j=0, key = 0;
    int a[m][n]={{1,12,30},{4,15,16},{7,18,90},{10,11,17}};
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    int flag = 0;
    int rowind = 0, colind = n-1;

    while(rowind<m && colind>=0)
    {
        int ele = a[rowind][colind];
        if(key == ele)
        {
            flag =1; break;
        }

        if(key> ele)
        {
            rowind++;
        }

        else
        {
            colind--;
        }
    }
    
    if(flag == 1)
    {
        cout<<key<<" is Present";
    }
    else{
        cout<<key<<" is Not Present";
    }

    return 0;
}
