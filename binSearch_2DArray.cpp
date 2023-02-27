#include<iostream>
using namespace std;

int main() 
{
    int m=4, n=3, i=0, j=0, key = 6;
    int a[m][n]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    int flag = 0;
    int row =m, col =n, s = 0, e = m*n-1,
    mid = s+(e-s)/2;

    while(s<=e)
    {
        int ele = a[mid/col][mid%col];
        if(key == ele)
        {
            flag =1; break;
        }

        else if(key> ele)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s+(e-s)/2;
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
