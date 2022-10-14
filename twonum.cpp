#include<iostream>
using namespace std;

class Numbers
{
private:
    int a;
    int b;
public:
    void getdata();
    void display();
    int addition();
    int subtraction();
    int multiplication();
    int division();
};

void Numbers :: getdata()
{
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
}

void Numbers::display(void)
{
    cout<<"a="<<a<<"  b="<<b<<endl;
}

int Numbers::addition()
{
    return (a+b);
}

int Numbers::subtraction()
{
    return (a-b);
}

int Numbers::multiplication()
{
    return (a*b);
}

int Numbers::division()
{
    return (a/b);
}

int main()
{
    Numbers num;
    int res;
    num.getdata();
    num.display();
    res = num.addition();
    cout<<"Addition="<<res<<endl;
    res = num.subtraction();
    cout<<"Subtraction="<<res<<endl;
    res = num.multiplication();
    cout<<"Multiplication="<<res<<endl;
    res = num.division();
    cout<<"Division="<<res<<endl;
    return 0;
}