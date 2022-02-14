#include<iostream>
#include<iomanip>
using namespace std;

int& max(int&,int&);2
int main()
{
    int a,b,m;
    cout<<"enter value of A and B : ";
    cin>>a>>b;
    
    m=max(a,b);
    cout<<endl<<"Maximum value = "<<m;
    return 0;
}

int& max(int&x,int&y)
{
    if(x>y)
        return x;
    else
        return y;
}