#include <iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int>pq;
    //no matter how you give the input it arranges itself in descending order
    //maxi priority_queue

    cout<<"size ->"<<pq.size()<<endl;
    pq.push(0);

    cout<<"size ->"<<pq.size()<<endl;
    pq.push(5);

    cout<<"size ->"<<pq.size()<<endl;
    pq.push(1);

    cout<<"size ->"<<pq.size()<<endl;
    pq.push(56);

    cout<<"size ->"<<pq.size()<<endl;

    cout<<"\n\nFront element -> "<<pq.top();
    cout<<"\nIs empty? ->"<<pq.empty()<<endl;

     while(!pq.empty()) {
        cout << pq.top()<<" ";
        pq.pop();
    }

    pq.push(5);
    pq.push(56);
    pq.push(0);
    pq.push(1);

    cout<<"\n\npoping elements\n";
    pq.pop();

    cout<<"\nsize ->"<<pq.size()<<endl;
     while(!pq.empty()) {
        cout << pq.top()<<" ";
        pq.pop();
    }

    return 0;
}

