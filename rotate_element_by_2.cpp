#include <iostream>

using namespace std;

int main()
{
    int a[5]= {1,2,3,4,5},b[5];
    int n=2;
    for(int i=0;i<5;i++)
    {
        // int temp;
        // temp = a[(i+2)%5];
        b[(i+2)%5] = a[i];
        // swap(a[(i+2)%5],a[i]);

    }
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
