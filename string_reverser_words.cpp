#include<iostream>

using namespace std;

int i=0,j=0;
string st = "Hi all my name is Akash";

void reverse(int m, int n)
{
    int s=m, e=n-1;
    while(s<e)
    {
        swap(st[s++],st[e--]);
    }
}

int main() 
{
    
    cout<<st<<endl;

    while(j< st.length())
    {
        if(st[j]==' ')
        {
            reverse(i,j);   
            i=j+1;
        }
        if(j== st.length()-1)
        {
            reverse(i,j+1);
        }
        j++;
    }
    cout<<"out "<<i<<" "<<j<<endl;
    cout<<st;

    return 0;
}