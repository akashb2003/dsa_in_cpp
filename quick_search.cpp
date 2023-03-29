#include<iostream>
using namespace std;

int partition(int arr[],int s,int n)
{
    int pivot = arr[s];
    int count=0;
    for(int i=s+1;i<=n;i++)
    {
        if(pivot>=arr[i])
        count++;
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=n;
    while(i< pivotIndex && j> pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]> pivot)
        {
            j--;
        }
        if(i< pivotIndex && j> pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;
}

void quicksort(int arr[],int s,int n)
{
    if(n==0 || n==1)
    return;

    int p = partition(arr,s,n);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,n);
}

int main()
{
    int arr[]={3,41,5,1,31,23};
    int n = 6;
     
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

