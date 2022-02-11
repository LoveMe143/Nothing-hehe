#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    int sum;

    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    
    sum=a+b;
    cout<<""<<a<<" + "<<""<<b<<" = "<<setw(4)<<sum<<endl;

    sum=a-b;
    cout<<""<<a<<" - "<<""<<b<<" = "<<setw(4)<<sum<<endl;

    sum=a*b;
    cout<<""<<a<<" * "<<""<<b<<" = "<<setw(4)<<sum<<endl;

    sum=a/b;
    cout<<""<<a<<" % "<<""<<b<<" = "<<setw(4)<<sum<<endl;


        sum=a+b;
        cout<<""<<a<<" + "<<""<<b<<" = "<<setw(10)<<sum<<endl;

        sum=a-b;
        cout<<""<<a<<" - "<<""<<a<<" = "<<setw(10)<<sum<<endl;

        sum=a*b;
        cout<<""<<a<<" * "<<""<<b<<" = "<<setw(10)<<sum<<endl;

        sum=a/b;
        cout<<""<<a<<" % "<<""<<b<<" = "<<setw(10)<<sum<<endl;


                    sum=a+b;
                    cout<<setw(5)<<""<<a<<" + "<<""<<b<<" = "<<setw(10)<<setfill(' ')<<sum<<endl;

                    sum=a-b;
                    cout<<setw(5)<<""<<a<<" - "<<""<<b<<" = "<<setw(10)<<setfill('*')<<sum<<endl;

                    sum=a*b;
                    cout<<setw(5)<<""<<a<<" * "<<""<<b<<" = "<<setw(10)<<setfill(' ')<<sum<<endl;

                    sum=a/b;
                    cout<<setw(5)<<""<<a<<" % "<<""<<b<<" = "<<setw(10)<<setfill('*')<<sum<<endl;

    return 0;
}