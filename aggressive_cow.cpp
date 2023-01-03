#include <iostream>

using namespace std;

bool isPossible(int a[], int mid , int cows,int size)
{
    int cow = 1, posi1 = a[0];
    
    for(int i=0; i<size; i++)
    {
        if(a[i] - posi1>= mid)
        {
            cow++;
            if(cow==cows)
            {
                return true;
            }
            posi1 = a[i];
        } 
        
    }

    return false;
}

int aggresiveCow(int a[], int cows,int size)
{
    int ans =-1;
    int s=0, e=a[size-1] , mid = s+(e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(a,mid,cows,size))
        {
            ans = mid;
            s = mid +1;
        }
        else
        {
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int size, cows;
    cout<<"enter the size\n";
    cin>>size;
    cout<<"Enter the number of cows\n";
    cin>>cows;
    int a[size];
    cout<<"Enter the stall distance in incresing order";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    int ans = aggresiveCow(a,cows,size);
    cout<<"The maximum distance the can stand without being aggresive is "<<ans;
    
    return 0;
}

