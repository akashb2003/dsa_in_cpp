#include<iostream>

using namespace std;

int i=0,j=0;
string st = "aaa b cc ddd ffffFDDDDD";

int main() 
{
    cout<<st<<endl;
    int a[26]={0},t=0,max=0,ind;

    int i=0;
    while(st[i]!='\0')
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            st[i] = st[i]-'A'+'a';
        }
        
        i++;
    }

    for(int i=0;i<26;i++)
    {
        if(st[i]=='\0')
        { break;}

        t = st[i]-'a';
        a[t]++;
        
    }
    
    max = a[0];
    for(int i=1;i<26;i++)
    {
        if(max<=a[i])
        {
            max = a[i];
            ind =i;
        }
    }

    char maxCh = 'a' + ind;
    cout<<"max occuring letter is = "<<maxCh<<"\nnumber of occurence = "<<a[ind];

    
    return 0;
}