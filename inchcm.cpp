#include<iostream>
using namespace std;

class inch_cm
{
private:
    int inch;
    float cm;
public:
    void getdata()
    {
        cout<<"Enter inch:";
        cin>>inch;
    }
    friend float convert(inch_cm);
};

float convert( inch_cm i)
{
    i.cm=i.inch*2.5;
    return i.cm;
}

int main()
{
    inch_cm a;
    float c;
    a.getdata();
    c=convert(a);
    cout<<"Centimeter="<<c<<endl;
}