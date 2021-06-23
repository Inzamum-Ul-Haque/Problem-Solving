#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,cnt=0;
    cin>>N;
    string num = std::to_string(N);
    string ans = "";

    for(int i=num.size()-1;i>=0;i--)
    {
        cnt++;
        ans.push_back(num[i]);
        if(cnt==3)
        {
            ans.push_back(',');
            cnt=0;
        }
    }
    reverse(ans.begin(),ans.end());

    if(ans.size()%4==0)
    {
        ans.erase(ans.begin());
    }

    cout<<ans<<endl;

    return 0;
}
