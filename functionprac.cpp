/*
    function in c++
*/
#include<iostream>
using namespace std;

int maximum(int a,int b); //forward declaration(signature of the function)
int main()
{
    int a,b;

    cout<<"Enter 2 numbers to find the greatest : "<<endl;
    cin>>a>>b;
    int c = maximum(a,b);
    cout<<"greatest value is :"<<c<<endl;
    return 0;
}

/* we can declare the function before the main function so that 
we dont have to do forward declartion */

//function declaration
int maximum(int x, int y)
{
    //function body
    if(x>y)
    return x;
    else
    return y;    
}