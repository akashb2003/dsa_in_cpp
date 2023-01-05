#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,5> a = {1,2,3,4,5};
    cout<<a.size()<<endl;
    cout<<a[3]<<"\n\n";
    cout<<"Traversing\n";
    for(int i=0;i<a.size();i++)
    cout<<a.at(i)<<" ";
    cout<<"\n\nFront element -> "<<a.front()<<"\nLast/back element -> "<<a.back()<<endl;
    cout<<"\nIs empty? ->"<<a.empty();
    return 0;
}
