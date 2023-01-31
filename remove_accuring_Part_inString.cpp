#include<iostream>
#include<string>

using namespace std;

string removePart(string s, string part)
{
    while(s.length()!=0 && (s.find(part)<s.length()) )
    {
        s.erase(s.find(part),part.length());
    }  
    return s;
}

int main()
{   
    string s = "daabcbaabcbc",  part = "abc";

    string b = removePart(s,part);
    cout<<b;
    return 0;
}
