#include <iostream>
using namespace std;

class Factorial
{
private:
    int n;
    int factorial = 1;

public:
    void calculateFactorial();
    void show();
};

void
Factorial::calculateFactorial()
{
    cout << "Enter a number : " << endl;
    cin >> n;

    if (n == 0 || n== 1)
    {
        factorial = 1;
    }
    else
    {
        while (n> 1)
        {
            factorial = factorial * n;
            n--;
        }
    }
}

void Factorial::show()
{
    cout << "Factorial : " << factorial << endl;
}

int main()
{
    Factorial f;
    f.calculateFactorial();
    f.show();
}