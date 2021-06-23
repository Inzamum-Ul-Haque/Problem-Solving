#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int student[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>student[i];
        sum+=student[i];
    }
    cout<<"Sum : "<<sum<<endl;
    float avg = (float)sum/n;
    cout<<"Average: "<<avg<<endl;
    int max=student[0];
    int min=student[0];
    for(int i=1;i<n;i++)
    {
        if(max<student[i])
        {
            max=student[i];
        }
        if(min>student[i])
        {
            min=student[i];
        }
    }
    cout<<"Maximum Mark: "<<max<<endl;
    cout<<"Minimum Mark: "<<min;
    return 0;
}
