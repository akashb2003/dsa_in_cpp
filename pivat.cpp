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

int main()
{
    int a[7] = {7,8,9,11,2,3,4};
    int ind = pivat(a,7);
    cout<<"Pivat element is "<<a[ind];
    return 0;
}

