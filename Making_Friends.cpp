#include<iostream>

using namespace std;

int main()
{
    int N,cnt=0;
    cin>>N;
    for(int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
