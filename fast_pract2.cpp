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
    int ans = 0;

    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        ans = ans^a[i];
    }

        cout<<"unique element found is "<<ans<<endl;
}
    return 0;
}

