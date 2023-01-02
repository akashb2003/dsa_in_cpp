#include <iostream>

using namespace std;

long long int squareRoot(int num)
{
    int s =0 ,k = num , e = num, ans = 0;
    long long int m = s+(e-s)/2;
    while(s<=e)
    {
        if(m*m==k)
        {
            ans = m;
            break;
        }
        if(m*m> k)
        {
            e = m-1;
        }
        else
        {
            ans = m;
            s = m+1;
        }
        m = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    int sq = squareRoot(num);
    cout<<"Square Root of "<<num<<" is "<<sq;
    return 0;
}

