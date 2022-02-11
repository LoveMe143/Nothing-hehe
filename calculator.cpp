#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int sum,mul,divide,minus;

    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    
    sum=a+b;
    cout<<""<<a<<" + "<<""<<b<<" = "<<sum<<endl;

    sum=a-b;
    cout<<""<<a<<" - "<<""<<b<<" = "<<sum<<endl;

    sum=a*b;
    cout<<""<<a<<" * "<<""<<b<<" = "<<sum<<endl;

    sum=a/b;
    cout<<""<<a<<" % "<<""<<b<<" = "<<sum<<endl;

    return 0;
}