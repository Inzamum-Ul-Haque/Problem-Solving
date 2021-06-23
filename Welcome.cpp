#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n],temp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(y==1)
    {
        while(x--)
        {
            temp=arr[n-1];
            for(int i=n-1;i>0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=temp;
        }
    }
    if(y==0)
    {
        while(x--)
        {
            temp=arr[0];
            for(int i=0;i<n-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[n-1]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        if(i+1==n)
        {
            continue;
        }
        else
        {
            cout<<" ";
        }
    }
    return 0;
}
