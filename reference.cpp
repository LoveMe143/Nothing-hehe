#include<iostream>
using namespace std;
int main()
{
int a,b=10,total;

cout<<"enter a : ";
cin>>a;
total = a + b;
int & sum = total;

cout<<total<<endl; // it will print 40
cout<<sum<<endl; // it will print 40
sum = 2;
cout<<total<<endl; // it will print 20
cout<<sum<<endl; // it will print 20
}