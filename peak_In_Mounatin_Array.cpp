#include <iostream>
using namespace std;

int peakInMountain(int a[], int size)
{
    int s = 0, e = size-1, m=s+((e-s)/2);
    while(s<e)
    {   
        if(a[m] < a[m+1])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        
        m=s+((e-s)/2);
    }
    
    return s;
}

int main()
{
    int a[] = {1,2,34,56,78,98,90,44,32};
    int peak= peakInMountain(a,9);
    
    cout<<"peak element in the mountain array is "<<a[peak];

    return 0;
}

