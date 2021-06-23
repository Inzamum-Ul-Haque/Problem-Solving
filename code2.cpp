#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num1,num2;

    cout<<"Enter two numbers: ";
    cin>> num1 >> num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum = num1 + num2;
    cout << "Sum: "<<sum <<endl;


    float sub = num1 - num2;
    cout << "Sub: "<<sub <<endl;

    float mul = num1 * num2;
    cout << "Mul: "<<mul <<endl;

    float div = num1 / num2;
    cout << "Div: "<<div <<endl;

    return 0;
}
