#include<iostream>
using namespace std;

int binSearch(int *arr, int s, int e, int k)
{
    if(e==0)
    {
        return 0;
    }

    int m= s+(e-s)/2;

    if(arr[m]==k)
    {
        return 1;
    }
    else if(arr[m]<k)
    {
        return binSearch(arr,m+1,e, k);
    }
    else
    {
        return binSearch(arr,s,e-m, k);
    }

}

int main()
{
    int arr[] = {1,2,3,4,55,65,332}, k = 65;
    int ans = binSearch(arr,0, 7, k);
    cout<<ans;
    
    return 0;
}
