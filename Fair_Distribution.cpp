#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,c;
    cin>>x>>y;
    if(y%x==0)
    {
        cout<<"0";
    }
    else
    {
        c=y%x;
        c=x-c;
        cout<<c;
    }
    return 0;
}
