#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int h,l;
    l=0;
    h=s.size()-1;
    while(h>l)
    {
        if(s[l++]!=s[h--])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}


