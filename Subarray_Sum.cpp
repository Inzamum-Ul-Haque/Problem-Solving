#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=a;i<=b;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
