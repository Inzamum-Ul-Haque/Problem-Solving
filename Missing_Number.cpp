#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int N,a;
    cin>>N;
    int i=1;
    long double num=0;
    while(i<=N)
    {
        cin>>a;
        num+=a;
        cout<<num/(double)i<<" ";
        i++;
    }

    return 0;
}

