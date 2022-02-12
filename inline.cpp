#include<iostream>
using namespace std;

inline int max(int x,int y)
{
    return((x>y)?x:y);
}
int main()
{
    int a,b;
    cout<<"Enter value of A : "<<endl;
    cin>>a;
    cout<<"Enter value of B : "<<endl;
    cin>>b;
    cout<<"Greater number is :"<<max(a,b);
    return 0;
}