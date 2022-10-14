#include <iostream>
using namespace std;

class multi
{
    public:
        int no;
    void table(int n)
    {
        no=n;
        cout << "Multiplication table of " << no<< " : " << endl;

        for (int i = 1; i <= 10; ++i)
        {
            cout<< n << " * " << i << " = " 
                << n * i << endl;
    }
    cout<< endl
                << "------------" << endl
                << endl;
        }

};

int main()
{
    multi T;
    int a,b;
    cout << "Enter first number: ";
        cin >> a;
    cout << "Enter second number: ";
        cin >> b;
        
    T.table(a);
    T.table(b);
}