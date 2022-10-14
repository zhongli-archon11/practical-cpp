#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class series
{
private:
    int x,n;
    double total;
public:
    double sum(int x, int n)
    {
        double i, multi= x;
        cout <<"sum "<<total <<" ";
        for (i=1; i < n; i++)
        {
            total=total+multi;
            cout<<multi<<" ";
            multi=multi*x;
        }
        cout<<"\n";
        return total;
    }
};

int main()
{
    series s1;
    s1.sum(2,5);
    cout << fixed << setprecision(2);
    return 0;
}
