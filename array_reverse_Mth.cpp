#include <iostream>
#include<vector>

using namespace std;

void ReversM(vector<int> &v, int n,int rev)
{
    int s = rev+1, e = n-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++; e--;
    }
     
}

int main()
{
    vector<int>v = {22,33,4,1,356,45,242,542,76,123,32};
    cout<<"vector\n";
    for(int i : v)
    cout<<i<<" ";
    int M =4;
    cout<<"\nM = "<<M<<endl;
    cout<<"\nRevers a vector from given 'M+1'th index\n";
    
    ReversM(v, v.size(),M);
    
    for(int i : v)
    cout<<i<<" ";
    return 0;
}

