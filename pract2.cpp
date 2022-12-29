//an array of length n, n=2m+1, where total m elements are repeated 2 times, find the unique element
//normal method
#include <iostream>

using namespace std;

int main()
{
    int n,m;
     cout<<"enter the number of test cases"<<endl;
    cin>>m;
    
    for(int k=0;k<m; k++)
    {
    cout<<"enter the number of elements in array(odd)"<<endl;
    cin>>n;
    cout<<"Enter the elements in an array"<<endl;
    int a[n];
    int flag=0,ss=0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    
    for(int i =0;i<n;i++)
    {        for(int j=0;j<=i; j++)
        {
            if(a[i]!=a[j])
            {
                ss = i;
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1){
        cout<<"unique element found is "<<a[ss]<<endl;
    }
    else
         cout<<"no unique element found "<<endl;
}
    return 0;
}

