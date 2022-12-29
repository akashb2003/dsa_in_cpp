//practice 1, swapping 2 alternate numbers in an array

#include <iostream>

using namespace std;

    void swapkar(int c[],int size)
    { int temp=0;
    for(int i=0;i< size; i+=2)
    {
        if(i+1<size)
        {
            // swap(c[i],c[i+1]);
            temp = c[i];
            c[i] = c[i+1];
            c[i+1] = temp;
            }
        
    }
    }
    
    void print(int c[], int size)
    {
        for(int i=0;i<size; i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9};
    print(a, 5);
    swapkar(a,5);
    print(a, 5);
    
        print(b, 4);
    swapkar(b,4);
    print(b, 4);
    
    return 0;
}
