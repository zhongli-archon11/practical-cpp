#include<iostream>
using namespace std;

class bank
{
 private:
     float p, r, n;
     float si;
     float amount;

 public:
    void read ( )
          {
                 cout <<"Enter Principle Amount: ";
                 cin>>p ;
                 cout<<"Enter Rate of Interest: ";
                 cin>>r;
                 cout <<"Enter Number of years: ";
                 cin>>n;

                 si= (p*r*n) /100;
                 amount = si + p;

          }

    void show( )
         {
                cout <<"\nInterest : "<<si;
                cout <<"\nTotal Amount : "<<amount<<"\n";
         }
};


int main ()
{
    bank b ;

    b.read ( );
    b.show ( );

    return 0;
}