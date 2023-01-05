#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;
    
    m.insert({1,"Hello"});
    m[2] = "Everyone";
    m[4] = "I'm";
    m[10] = "Akash";
    
    for(auto i : m)
    cout<<i.first<<" "<<i.second<<endl;
    
    cout<<"\nIs empty? ->"<<m.empty()<<endl;
    cout<<"\n\nerasing 2nd key\n";
    
    m.erase(2);
    
    for(auto i : m)
    cout<<i.first<<" "<<i.second<<endl;
    auto it = m.find(4);
    // map<int, string>::iterator it = m.find(4);  //we can also write like this
    
    cout<<"\ncheck key 10 is present or no ->" <<m.count(10);
    
    cout<<"\nprint from 4\n";
    for(auto i=it; i!=m.end(); i++)
    cout<<(*i).first<<" "<<(*i).second<<"\n";
    
    return 0;
}

