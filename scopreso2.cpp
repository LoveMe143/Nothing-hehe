#include<iostream>
using namespace std;

int a = 10;
int main()
{
    int a = 5;
    cout<<"local value of a = "<<a<<endl;
    cout<<"global value of a ="<<::a;
    return 0;
}