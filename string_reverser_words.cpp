#include <iostream>
#include<ctype.h>
using namespace std;

int reverse_words(char s[],int n)
{
    int j=0,k=0,l=0,space=0;
    for(int i=0; i<=n; i++)
    {

        if(isspace(s[i]))
        {
            l++;
            if(l==1)
            {
                space=i;
            }
            k=i;
            while(j<k-1)
            {
                swap(s[j++],s[k-1]);
                k--;
            }
            j=i;
        }

        if(s[i]=='\0')
        {
            k=i;
            while(j<k-1)
            {
                swap(s[j++],s[k-1]);
                k--;
            }
            j=i;
        }
    }
    
    return space;
}

int main()
{
   char s[]="Hey I'm Akash. How are you all, I'm just practicing";
    
    int sp = reverse_words(s,50);
    cout<<endl;
    
    for(int i=0;s[i]!='\0';i++)
   { 
    if(sp==i)
    {
        cout<<" ";
    }
    cout<<s[i];
   }

    return 0;
}
