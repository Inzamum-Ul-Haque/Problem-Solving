#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,p;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
        if(s[i]-n<97)
        {
            p=26-n;
            s[i]='z'-n;
        }
        else
        {
            s[i]=s[i]-n;
        }
    }
    cout<<s;
    return 0;
}
