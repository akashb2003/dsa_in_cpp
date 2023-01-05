#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,0,0,3,0,5,7,0,0,2};
    for(int i =0;i<10;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    
    // for(int i=0; i<10;i++)
    // {
    //     if(a[i]==0)
    //  {
    //     for(int j = i+1; j<10;j++)
    //     {
    //         if(a[i]!=a[j])
    //         {
    //             swap(a[i],a[j]);
    //             break;
    //         }
    //     }
    //  }
    // }
    
    //or
    int newt =0;
    for(int i=0;i<10;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[newt]);
            newt++;
        }
    }
    
    for(int i =0;i<10;i++)
    cout<<a[i]<<" ";

    return 0;
}

