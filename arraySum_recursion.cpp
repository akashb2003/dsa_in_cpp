#include<iostream>
using namespace std;

int Sum(int *arr, int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    int sum = arr[0]+ Sum(arr+1,n-1);

    return sum;
}

int main() 
{
    int arr[] = {1,2,3,4,5};
    int ans = Sum(arr, 5);
    cout<<ans;
    
    return 0;
}
