#include<iostream>
using namespace std;

class A
{
    int n,count;
public:
    void input()
    {
        cout<< "Enter any number: ";
        cin>>n;
    }
    void output()
    {
        count=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
            cout<<"This is a prime number";
        else
            cout <<"This is not a prime number: ";
    }
};

int main()
{
    A obj;
    obj.input();
    obj.output();
}