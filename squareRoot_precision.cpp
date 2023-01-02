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

float decimal2(float sq, float n, int pri)
{
    float ans = sq, factor = 1;
    
    for(int i =0; i<pri; i++)
    {
        factor = factor/10;
        
        for(float j = ans; j*j < n ; j+=factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main()
{
    int num = 123;
    // cin>>num;
    int temp = squareRoot(num);
    float ans = decimal2(temp,num,6);
    cout<<"Square Root of "<<num<<" is "<<ans;
    return 0;
}

