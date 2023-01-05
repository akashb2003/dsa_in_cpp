#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    v.push_back(1);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    v.push_back(4);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    v.push_back(113);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    v.push_back(44);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    v.push_back(147);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    v.push_back(46);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    cout<<"\n"<<v[3]<<"\n\n";
    cout<<v.at(3)<<"\n\n";
    cout<<"Traversing\n";
    for(int i : v)
    cout<<i<<" ";
    
    cout<<"\n\nFront element -> "<<v.front()<<"\nLast/back element -> "<<v.back()<<endl;
    cout<<"\nIs empty? ->"<<v.empty();
    cout<<"\n\npoping elements\n";
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"\n\nTraversing\n";
    for(int i : v)
    cout<<i<<" ";
    cout<<"\n capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    cout<<"\nclearing all elements\n";
    v.clear();
    cout<<"\ncapacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    return 0;
}
