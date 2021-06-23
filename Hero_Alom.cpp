#include<iostream>
using namespace std;
int main()
{
    long long t,d,sum;
    cin>>t;
    int j=1;
    while(t--)
    {
        sum=0;
        cin>>d;
        for(int i=1;i<=d;i++)
        {
            if(i%5==0)
            {
                continue;
            }
            sum+=i;
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
        j++;
    }
    return 0;
}

