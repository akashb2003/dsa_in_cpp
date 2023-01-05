#include <iostream>
#include<vector>

using namespace std;

void Revers(vector<int> &v, int n)
{
    int s = 0, e = n-1;
    for(int i=0; i<(n/2); i++)
    {
        swap(v[i],v[e]);
        s++; e--;
    }
     
}

int main()
{
    vector<int>v = {22,33,4,1,356};
    cout<<"vector\n";
    for(int i : v)
    cout<<i<<" ";
    cout<<"\nRevers vector\n";
    
    Revers(v, v.size());
    
    for(int i : v)
    cout<<i<<" ";
    return 0;
}

