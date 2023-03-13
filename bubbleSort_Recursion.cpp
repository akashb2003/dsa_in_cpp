#include<iostream>
#include<string>
using namespace std;

void bubbleSort(int *arr,int n)
{
    if(n==1||n==0)
    {
        return;
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,n-1);
}

int main()
{
    int arr[]={3,41,443,12,454,1,677,8,5};
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
