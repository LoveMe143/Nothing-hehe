#include <iostream>
using namespace std;
class arithmetic
{
 private: int a,b,sum,sub;
 public:
 void getdata(int m, int n);
 void add();
 void diff();
 void show()
 {
 cout<<"Addition of two nos="<<sum;
 cout<<endl<<"subtraction of two nos="<<sub;
 }
};
void arithmetic :: getdata(int m,int n)
{
 a=m;
 b=n;
}
void arithmetic :: add()
{
 sum=a+b;
}
void arithmetic :: diff()
{
 sub=a-b;
}
int main()
{
 arithmetic a1; //a1 is object of class arithmetic
 int p,q; //variables
 cin>>p>>q; // 12 10
 a1.getdata(p,q);
 a1.add();
 a1.diff();
 a1.show();
 return 0;
}