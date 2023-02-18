#include <iostream>
#include <string>
using namespace std;

char toLower(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else
    {
        char tp = ch - 'A'+'a';
        return tp;
    }
}

int isvalid(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')|| (ch>='A' && ch<='Z'))
    {
        return 1;
    }
    else
    return 0;
}

int ispalen(string st)
{
    int s=0, e = st.length() -1;
    for(s=0;s<e;s++,e--)
    {
        if(st[s]!=st[e])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s="9Hello,101 olleH9",s1="";
    cout<<s<<endl; 
    int i=0;
    while(s[i]!='\0')
    {
        if(isvalid(s[i]))
        {
            s1.push_back(s[i]);
            // s1[l]=toLower(s1[l++]);
        }
        i++;
    }
    
    i=0;
    while(s1[i]!='\0')
    {
        s1[i]= toLower(s1[i]);
        i++;
    }
    cout<<s1<<endl;

    int b = ispalen(s1);
    if(b==1)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}

