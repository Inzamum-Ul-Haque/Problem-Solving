#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>a>>b;
    c=a+b;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            n=a;
        }else if(i==1)
        {
            n=b;
        }else
        {
            n=c;
        }
        int counter=0,arr[100000],j,temp;
        do{
            temp=n%10;
            if(temp!=0)
            {
                arr[counter]=temp;
                counter++;
            }
            n=n/10;
        }while(n>0);
        std::stringstream ss;
        for(int j=counter-1;j>=0;j--)
        {
            ss<<arr[j];
        }
        if(i==0)
        {
            ss>>a;
            //a=(int)a;
        }else if(i==1)
        {
            ss>>b;
            //b=(int)b;
        }else
        {
            ss>>c;
            //c=(int)c;
        }
    }
    if(a+b==c)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    return 0;
}
