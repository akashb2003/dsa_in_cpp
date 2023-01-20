#include <iostream>

using namespace std;

int check(int a[],int n)
{
    int count=0,i=1;
    for(i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            count++;
        }
        i++;
    }
    if(a[0]<a[i])
    count++;
    return count;
}

int main()
{
    int a[]={3,4,5,1,2,3},b[]={3,4,5,1,2,6},d[]={1,2,3,4,5};
    int c = check(a,5);
    if(c<2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    c = check(b,6);
    if(c<2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
    c = check(d,5);
    if(c<2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

