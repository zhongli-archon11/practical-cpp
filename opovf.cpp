#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A()
    {
        a=0;
        b=0;
    }

    A(int x , int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }

    friend A operator + (A c, A d)
    {
        A temp;
        temp.a=c.a+d.a;
        temp.b=c.b+d.b;
        return temp;
    }
};

int main()
{
    A f1(3,4), f2(2,2),f3;
    cout<<"f1=\n";
    f1.display();
    cout<<"\nf2=\n";
    f2.display();
    f3=f1+f2;
    cout<<"\nf3=\n";
    f3.display();
}