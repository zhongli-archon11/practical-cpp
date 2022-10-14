#include<iostream>
using namespace std;

class num
{
    int x,y;
    public:
        num()
        {
            x=0;
            y=0;
        }

        num(int a, int b)
        {
            x=a;
            y=b;
        }

        void display()
        {
            cout<<"x="<<x<<endl
                <<"y="<<y
                <<endl;
        }

        num operator + (num n4)
        {
            num temp;
            temp.x=x+n4.x;
            temp.y=y+n4.y;
            return temp;
        }
};

int main()
{
    num n1(3,4),n2(2,2),n3;
    cout<<"n1:\n";
    n1.display();
    cout<<"\n n2:\n";
    n2.display();
    n3=n1+n2;
    cout<<"\nAddition:\n";
    n3.display();
}