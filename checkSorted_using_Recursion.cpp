#include<iostream>
using namespace std;

int checkSorted(int *arr, int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(arr[0]>arr[1])
    {
        return 0;
    }
    else
    {
        int ans = checkSorted(arr+1, n-1);
        return ans;
    }
}

int main() 
{
    int arr[] = {1,2,3,4,54,56};
    int ans = checkSorted(arr, 6);
    if(ans)
    {
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
    return 0;
}
