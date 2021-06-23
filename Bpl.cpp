#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    string str;
    for(int i=0; i<T; i++)
    {
        int cnt=0;
        cin>>str;
        for(int j=0; j<str.size(); j++)
        {
            if(str[j] == 'O')
            {
                cnt++;
            }
            else if(str[j] >='0' && str[j] <='6')
            {
                cnt++;
            }
        }
        int over=cnt/6;
        int ball=cnt%6;
        if(over>=1)
        {
            if(over==1)
            {
                cout<<over<<" OVER ";
            }
            else if(over>1)
            {
                cout<<over<<" OVERS ";
            }
        }
        if(ball==0)
        {
            cout<<endl;
            continue;
        }

        if(ball>=1)
        {
            if(ball==1)
            {
                cout<<ball<<" BALL";
            }
            else if(ball>1)
            {
                cout<<ball<<" BALLS";
            }
        }
        if(i<T)
        {
            cout<<endl;
        }
    }
    return 0;
}
