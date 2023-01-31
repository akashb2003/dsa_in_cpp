#include<iostream>
using namespace std;

int a[26];

void fillAry(char s[])
{
    for(int i=0;s[i]!='\0';i++)
    {
        char ch = s[i];
        if(ch>='a' && ch<='z')
        {
            int num = ch - 'a';
            a[num]++;
        }

        if(ch>='A' && ch<='Z')
        {
            int num = ch - 'A';
            a[num]++;
        }
    }
}

char checkbig()
{
    int big=-1,max;
    for(int i=0;i<25;i++)
    {
        if(big<a[i])
        {
            max = i;
            big = a[i];
        }
    }

    return 'a'+ max;
}

int main()
{
    char s[]="HhhEeLLlooooooO";
    
    for(int i=0;s[i]!='\0';i++)
    {
        cout<<s[i];
    }

    fillAry(s);
    char more = checkbig();

    cout<<"\nMost repeated char is "<<more;

    return 0;
}
