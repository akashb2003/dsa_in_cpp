#include <iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;
   
    cout<<"size ->"<<d.size()<<endl;
    d.push_back(1);
    // cout<<"capacity ->"<<d.capacity()<<endl;
    cout<<"size ->"<<d.size()<<endl;
    d.push_front(4);
  
    cout<<"size ->"<<d.size()<<endl;
    d.push_back(113);
 
    cout<<"size ->"<<d.size()<<endl;
    d.push_front(44);

    cout<<"size ->"<<d.size()<<endl;
    d.push_back(147);

    cout<<"size ->"<<d.size()<<endl;
    d.push_front(46);

    cout<<"size ->"<<d.size()<<endl;
    
    cout<<"\n"<<d[3]<<"\n\n";
    cout<<d.at(3)<<"\n\n";
    
    cout<<"Traversing\n";
    for(int i : d)
    cout<<i<<" ";
    
    cout<<"\n\nFront element -> "<<d.front()<<"\nLast/back element -> "<<d.back()<<endl;
    cout<<"\nIs empty? ->"<<d.empty();
    cout<<"\n\npoping elements";
    d.pop_back();
    d.pop_front();

    cout<<"\n\nTraversing\n";
    for(int i : d)
    cout<<i<<" ";
 
    cout<<"\nsize ->"<<d.size()<<endl;
   
    d.erase(d.begin(), d.begin()+2);
    cout<<"\n\nTraversing\n";
    for(int i : d)
    cout<<i<<" ";
    
   
    cout<<"\n\nclearing all elements\n";
    d.clear();

    cout<<"size ->"<<d.size()<<endl;
    return 0;
}
