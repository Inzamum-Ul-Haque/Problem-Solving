#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string A,B;
    cin>>A>>B;
    int n1,n2;
    n1 = A.size();
    n2 = B.size();
    if(n1!=n2)
    {
        cout<<"No";
        return 0;
    }
    else
    {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<n1;i++)
        {
            if(A[i]!=B[i])
            {
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}
