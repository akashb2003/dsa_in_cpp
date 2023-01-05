#include <iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>s;
   
    cout<<"size ->"<<s.size()<<endl;
    s.push(1);
    
    cout<<"size ->"<<s.size()<<endl;
    s.push(4);
  
    cout<<"size ->"<<s.size()<<endl;
    s.push(113);
 
    cout<<"size ->"<<s.size()<<endl;
    s.push(44);

    cout<<"size ->"<<s.size()<<endl;
    s.push(147);

    cout<<"size ->"<<s.size()<<endl;
    s.push(46);

    cout<<"size ->"<<s.size()<<endl;
    
    cout<<"\n\nFront element -> "<<s.top();
    cout<<"\nIs empty? ->"<<s.empty()<<endl;
    
     while(!s.empty()) {
        cout << s.top()<<" ";
        s.pop();
    }
    
    s.push(46);
    s.push(147);
    s.push(44);
    s.push(113);
    s.push(4);
    s.push(1);
    
    cout<<"\n\npoping elements\n";
    s.pop();
    s.pop();
    cout<<"\nsize ->"<<s.size()<<endl;    
     while(!s.empty()) {
        cout << s.top()<<" ";
        s.pop();
    }

    return 0;
}
