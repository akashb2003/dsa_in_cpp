#include<iostream>
#include<string>
using namespace std;
void merge(int *arr,int s, int e)
{
    int m = s+(e-s)/2;
    int l1 = m-s+1;
    int l2 = e-m;

    int *first = new int[l1];
    int *second = new int[l2];
    int k=s;

    for(int i=0;i<l1;i++)
    {
        first[i]=arr[k++];
    }
    k=m+1;
    for(int i=0;i<l2;i++)
    {
        second[i]=arr[k++];
    }

    int index1=0, index2=0;
    k=s;

    while(index1<l1 && index2<l2)
    {
        if(first[index1]<second[index2])
        {
            arr[s++] = first[index1++];
        }
        else
        {
            arr[s++] = second[index2++];
        }
    }

    while(index1<l1)
    {
        arr[s++]= first[index1++];
    }

    while(index2<l2)
    {
        arr[s++]= second[index2++];
    }

}


void mergeSort(int *arr,int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int m = s+(e-s)/2;

    mergeSort(arr, s,m);
    mergeSort(arr,m+1,e);

    merge(arr,s,e);
}

int main()
{
    int arr[]={3,41,443,12,454,1,677,8,5};
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr,0,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
