#include <iostream>

using namespace std;

int calc(char st[],int a)
{
    int b=1,s=0,e=a-1;
    while(s<e)
    {
        if(st[s++]!=st[e--])
        b=0;
    }
    return b;
}

int main()
{
    char s1[] = "mom",s2[]="dad",s3[]="puppy",s4[]="696";

    int b;
    b= calc(s1,3);
    cout<<"mom\n";
    if(b==1)
    cout<<"YES"<<endl<<endl;
    else
    cout<<"NO"<<endl<<endl;

    b= calc(s2,3);
    cout<<"dad\n";
    if(b==1)
    cout<<"YES"<<endl<<endl;
    else
    cout<<"NO"<<endl<<endl;
    
    b= calc(s3,5);
    cout<<"puppy\n";
    if(b==1)
    cout<<"YES"<<endl<<endl;
    else
    cout<<"NO"<<endl<<endl;

    b= calc(s4,3);
    cout<<"696\n";
    if(b==1)
    cout<<"YES"<<endl<<endl;
    else
    cout<<"NO"<<endl<<endl;
    return 0;
    
}

