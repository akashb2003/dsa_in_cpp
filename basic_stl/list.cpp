#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int>l;
   
    cout<<"size ->"<<l.size()<<endl;
    l.push_back(1);
    // cout<<"capacity ->"<<d.capacity()<<endl;
    cout<<"size ->"<<l.size()<<endl;
    l.push_front(4);
  
    cout<<"size ->"<<l.size()<<endl;
    l.push_back(113);
 
    cout<<"size ->"<<l.size()<<endl;
    l.push_front(44);

    cout<<"size ->"<<l.size()<<endl;
    l.push_back(147);

    cout<<"size ->"<<l.size()<<endl;
    l.push_front(46);

    cout<<"size ->"<<l.size()<<endl;
    
    cout<<"Traversing\n";
    for(int i : l)
    cout<<i<<" ";
    
    cout<<"\n\nFront element -> "<<l.front()<<"\nLast/back element -> "<<l.back()<<endl;
    cout<<"\nIs empty? ->"<<l.empty();
    cout<<"\n\npoping elements";
    l.pop_back();
    l.pop_front();

    cout<<"\n\nTraversing\n";
    for(int i : l)
    cout<<i<<" ";
 
    cout<<"\nsize ->"<<l.size()<<endl;
    
    cout<<"\nCopying l in c\n";
    list<int> c(l);
    cout<<"\n\nTraversing c\n";
    for(int i : c)
    cout<<i<<" ";
    
    cout<<"\nIitializing new list P of size 5 , all to 100\n";
    list<int> P(5,100);
    cout<<"\n\nTraversing\n";
    for(int i : P)
    cout<<i<<" ";
    
    cout<<"\n\nclearing all elements of l\n";
    l.clear();

    cout<<"size ->"<<l.size()<<endl;
    return 0;
}
