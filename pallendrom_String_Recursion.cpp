#include<iostream>
#include<string>
using namespace std;

int pallend(string st, int s, int e)
{
    
    if(s==e)
    {
        return 1;
    }

    if(st[s]!=st[e])
    {
        return 0;
    }

    int ans = pallend(st,s+1,e-1);
    return ans;
}

int main()
{
    string st= "mom";
    cout<<st<<endl;
    int ans = pallend(st,0,st.length()-1);
    cout<<ans;
    return 0;
}
