#include<iostream>
using namespace std;

class fibonacci
{
    private:
        int f0,f1,fib;
    public:
        fibonacci()
        {
            f0=0;
            f1=1;
            fib=f0+f1;
        }
        fibonacci (fibonacci &ptr)
        {
            f0=ptr.f0;
            f1=ptr.f1;
            fib=ptr.fib;
        }
        void increment()
        {
            f0=f1;
            f1=fib;
            fib=f0+f1;
        }
        void display()
        {
            cout << fib << '\t';
        }
};

int main ()
{
    fibonacci number;
    for (int i=0; i<=15;i++)
    {
        number.display();
        number.increment();
    }
}