#include<iostream>
using namespace std;

int main() 
{
    int m=5, n=3, tot = m*n, count=0;
    int a[m][n]={{1,2,3},{4,5,6},{7,8,9},{1,4,5},{4,5,6}};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<"\nspiral print\n";

    int startingRow = 0,
        startingCol = 0,
        endingRow = m-1,
        endingCol = n-1;

    while(count<tot)
    {
        for(int ind = startingCol;count<tot && ind<=endingCol; ind++)
        {
            cout<<a[startingRow][ind]<<" ";
            count++;
        }
        startingRow++;

        for(int ind = startingRow; count<tot && ind<=endingRow; ind++)
        {
            cout<<a[ind][endingCol]<<" ";
            count++;
        }
        endingCol--;

        for(int ind = endingCol; count<tot && ind>=startingCol; ind--)
        {
            cout<<a[endingRow][ind]<<" ";
            count++;
        }
        endingRow--;

        for(int ind = endingRow; count<tot && ind>=startingRow; ind--)
        {
            cout<<a[ind][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }
    return 0;
}
