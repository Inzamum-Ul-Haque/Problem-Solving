#include<iostream>

using namespace std;

int main()
{
    int l;
    cin>>l;
    if(l%400==0)
    {
        cout<<"No";
    }
    else if(l%4==0)
    {
        cout<<"Yes";
    }
    else if(l%100==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
