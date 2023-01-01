#include <iostream>
using namespace std;

int left(int a[], int size, int k)
{
    int s = 0, e = size, m=s+((e-s)/2),ans=-1;
    while(s<=e)
    {   
        if(a[m] == k)
        {
            ans = m;
            e = m -1;
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
    
    return ans;
}

int right(int a[], int size, int k)
{
    int s = 0, e = size, m=s+((e-s)/2),ans=-1;
    while(s<=e)
    {   
        if(a[m] == k)
        {
            ans = m;
            s = m +1;
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
    
    return ans;
}

int main()
{
    int a[] = {1,2,34,56,56,56,78,98,909,4432};
    int indr = right(a,11,56);
    int indl = left(a,11,56);
    
    if(indr == -1 && indl == -1)
    {
        cout<<"Element nod found";
    }
    else
    {
        cout<<"Element found at index "<<indl<<" "<<indr;
    }

    cout<<"\nNumber of times the element repeated: "<<(indr-indl)+1;

    return 0;
}

