#include <iostream>

using namespace std;

void calc(char st[],int a)
{
    int s=0,e=a-1;
    while(s<e)
    {
        swap(st[s++],st[e--]);
    }
    
}

int main()
{
    char s1[] = "hii",s2[]="this",s3[]="is",s4[]="akash";

    calc(s1,3);
    cout<<"hii\n";
    cout<<s1<<endl<<endl;

    calc(s2,4);
    cout<<"this\n";
    cout<<s2<<endl<<endl;
    
    calc(s3,2);
    cout<<"is\n";
    cout<<s3<<endl<<endl;

    calc(s4,5);
    cout<<"akash\n";
    cout<<s4<<endl<<endl;
    return 0;
    
}
