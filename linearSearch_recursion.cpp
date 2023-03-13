#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int k)
{
    if(n==0)
    {
        return 0;
    }
    if(arr[0]==k)
    {
        return 1;
    }
    else
    {
        return linearSearch(arr+1, n-1, k);
    }

}

int main() 
{
    int arr[] = {1,2,3,4,55,65,3432}, k = 645;
    int ans = linearSearch(arr, 7, k);
    cout<<ans;
    
    return 0;
}
