#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0,rem1,rem2;
    cin>>a>>b;
    while(a>0 && b>0)
    {
        rem1=a%10;
        rem2=b%10;
        if(rem1+rem2>9)
        {
            cnt++;
        }
        a=a/10;
        b=b/10;
    }
    if(cnt>0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}

