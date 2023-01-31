#include<iostream>
#include<string>

using namespace std;
string s;
string a;

void addSmtg(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            a.push_back('@');
             a.push_back('4');
              a.push_back('0');
        }
        else
        {
         a.push_back(s[i]);
        }
    }
}

int main()
{   
    s = "hi all, how r u";
    addSmtg(s);
    cout<<s<<endl<<a;
    
    return 0;
}
