#include<iostream>
using namespace std;
int main()
{
    int t,n,x,l,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n],b[n];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        b[x]=a[x];
        l=n;
        for(int i=1; i<=n,l>=1; i++,l--)
        {
            if(i==x)
            {
                continue;
            }
            else if(i!=x)
            {
                b[i]=a[l];
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
