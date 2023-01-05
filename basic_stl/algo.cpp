#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(5);
    v.push_back(12);
    v.push_back(51);
    v.push_back(102);
    cout<<"vector\n";
    for(int i : v)
    cout<<i<<" ";
    int bin = binary_search(v.begin(),v.end(),51);
    cout<<"\nis 51 present using binary search "<<bin<<endl;
    string ab = "abcdef";
    cout<<ab;
    reverse(ab.begin(),ab.end());
    cout<<"\n\nreversed "<<ab<<endl;
    rotate(v.begin(),v.begin()+2, v.end());
    cout<<"\n\nRotated vector by degree 2\n";
    for(int i : v)
    cout<<i<<" ";
    return 0;
}

