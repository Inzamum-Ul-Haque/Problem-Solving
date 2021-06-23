#include<iostream>
using namespace std;
int main()
{
    int n,t,senta=0,notSenta=0,sentb=0,notSentb=0,x,y;
    string a,b;
    cin>>n;
    while(n--)
    {
        cin>>t>>x>>y;
        if(t==1)
        {
            senta=senta+x;
            notSenta=notSenta+y;
        }
        if(t==2)
        {
            sentb=sentb+x;
            notSentb=notSentb+y;
        }
    }
    cout<< (senta>=notSenta ? "LIVE" : "DEAD") <<endl;
    cout<< (sentb>=notSentb ? "LIVE" : "DEAD") <<endl;
    return 0;
}

