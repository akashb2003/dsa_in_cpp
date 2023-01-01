#include <iostream>
using namespace std;

int binary(int a[], int size, int k)
{
    int s = 0, e = size, m=s+((e-s)/2);
    while(s<=e)
    {   
        if(a[m] == k)
        {
            return m; 
        }
        if(a[m]<k)
        {
            s = m+1;
        }
        else
        {
            e = m-1;
        }
        
        m = s+((e-s)/2);
    }
}

int main()
{
    int a[] = {1,2,34,56,98,909,4432};
    int ind = binary(a,7,56);
    
    if(ind == -1)
    {
        cout<<"Element nod found";
    }
    else
    {
        cout<<"Element found at index "<<ind;
    }

    return 0;
}

