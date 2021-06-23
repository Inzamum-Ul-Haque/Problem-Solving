#include<iostream>
#include<cmath>
using namespace std;
double areas(int a,int b,int c)
{
    double s1=sqrt((double)a*c/b);
    double s2=sqrt((double)a*b/c);
    double s3=sqrt((double)b*c/a);
    return s1+s2+s3;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double edge=areas(a,b,c);
    cout<<4*edge;
    return 0;
}
