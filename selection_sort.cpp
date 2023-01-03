#include <iostream>

using namespace std;

void linearSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind = i;
        for(int j=i+1; j<n;j++)
        {
            if(a[j]<a[min_ind])
            {
                min_ind = j;
            }
            
        }
        if(min_ind!=i)
        {
            swap(a[min_ind], a[i]);
        }
    }
}

int main()
{
    cout<<"Enter size of an array\n";
    int n; cin>>n;
    int a[n]; 
    cout<<"Enter elements of an array\n";
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nbefore sorting\n";
    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    linearSort(a,n);
    cout<<"\nafter sorting\n";
    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    

    return 0;
}

