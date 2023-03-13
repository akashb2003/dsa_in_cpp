#include<iostream>
#include<string>
using namespace std;

/*

Slow method

int power2(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    int ans = a* power(a,b-1);
    return ans;
}
*/

int power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }

    int ans = power(a,b/2);

    if(b%2==0)
    {
        return ans*ans;
    }
    else
    {
        return ans*ans*a;
    }
}

int main()
{
    int a, b;
    cout<<"enter base and value\n";
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans;
    return 0;
}
