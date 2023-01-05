#include <iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string>q;
   
    cout<<"size ->"<<q.size()<<endl;
    q.push("Hi");
    
    cout<<"size ->"<<q.size()<<endl;
    q.push("I'm");
  
    cout<<"size ->"<<q.size()<<endl;
    q.push("Akash");
 
    cout<<"size ->"<<q.size()<<endl;
    q.push("Programming");
    
    cout<<"size ->"<<q.size()<<endl;
    
    cout<<"\n\nFront element -> "<<q.front();
    cout<<"\n\n Back element "<<q.back();
    cout<<"\nIs empty? ->"<<q.empty()<<endl;
    
     while(!q.empty()) {
        cout << q.front()<<" ";
        q.pop();
    }
    
    q.push("Hi");
    q.push("I'm");
    q.push("Akash");
    q.push("Programming");
    
    cout<<"\n\npoping elements\n";
    q.pop();
    
    cout<<"\nsize ->"<<q.size()<<endl;    
     while(!q.empty()) {
        cout << q.front()<<" ";
        q.pop();
    }

    return 0;
}
