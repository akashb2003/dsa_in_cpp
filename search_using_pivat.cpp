#include <iostream>

using namespace std;

int pivat(int a[], int n)
{
    int s=0,e=n-1, m = s+(e-s)/2;
    while(s<e)
    {
        if(a[m]>=a[0])
        {
            s = m +1;
        }
        else
        {
            e = m;
        }
            m = s+(e-s)/2;
        
    }
    return s;
}

int binarySearch(int a[],int st, int n,int key)
{
    int k =key, s=st,e = n-1, m = s+(e-s)/2, ans = -1;
    while(s<=e)
    {
        if(a[m]==k)
        {
            ans = m;
            break;
        }
        if(a[m]> k)
        {
            e = m-1;
        }
        else
        {
            s = m+1;
        }
        m = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int a[16] = {7,8,9,9,9,9,11,11,13,34,56,78,678,2,3,4};
    int k = 78, got;
    int ind = pivat(a,16);
    if(a[ind]<=k && k <= a[16])
    {
        got = binarySearch(a,ind,16,k);
    }
    else
    {
        got = binarySearch(a,0,ind ,k);
    }
    if(got == -1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index "<<got; 
    }
    return 0;
}

