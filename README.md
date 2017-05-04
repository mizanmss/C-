#include<iostream>
using namespace Std;
class number{
int x,y;
public :
number(){ a=0; b=0;}
number(int a,int b){x=a; y=b;}
void get(int &a, int &b){a=x; b=y;}
void set(int a, int b){x=a;y=b;}
void print(){cout<<x<<""<<y<<endl;}
number operator+(number ob)
};
number number ::operator+(number ob)
{
number tmp;
tmp.x=x+ob.x;
tmp.y=y+ob.y;
return tmp;
}
int main
{
number n1(4,6), n2(7,8),n3;
n3=n1+n2;
n3.print();
return 0;
}
