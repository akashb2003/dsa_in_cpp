#include <iostream>

using namespace std;

bool isPossible(int a[], int m, int b,int mid)
{
    int stu = 1, page =0;
    for(int i=0;i<b;i++)
    {
        if(page+a[i]<= mid)
        {
            page+=a[i];
        }
        else
        {
            stu++;
            if(stu>m || a[i]>mid)
            {
                return false;
            }
            page = a[i];
        }
    }
    
    return true;
}

int binarySolve(int a[], int m, int b)
{
    int pages, ans =-1;
    for(int i=0;i<b ;i++)
    {
        pages+= a[i];
    }
     
    int s=0,e= pages, mid = s+(e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(a,m,b,mid))
        {
            ans = mid;
            e = m-1;
        }
        else
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int a[] = {10,20,30,40}, stu = 2, books = 4;
    
    int ans = binarySolve(a,stu,books);
    cout<<ans;
    
    return 0;
}

