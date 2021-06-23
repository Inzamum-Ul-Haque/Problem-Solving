#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i;
    string a;
    cin>>a;
    a[0]=toupper(a[0]);
    int l = a.size();
    a[l]='.';
    l++;
    for(i=1; i<l; i++)
    {
        if(a[i]=='s')
        {
            a[i]='$';
        }
        else if(a[i]=='i')
        {
            a[i]='!';
        }
        else if(a[i]=='o')
        {
            l++;
            for(int j=l;j>i+1;j--)
            {
                a[j]=a[j-1];
            }
            a[i]='(';
            a[i+1]=')';
        }
        else
            continue;
    }
    cout<<a;
    return 0;
}
