#include<iostream>
using namespace std;

class set
{
	int a,b,c;
	public:
		void input()
		{
		    cout << "Input three numbers: \n";
            cin >> a >> b >> c;
		}
		void display()
		{
		   if (a>=b && a>=c)
                cout<<"Maximum is: "<<a<<endl;
            else if (b >= c)
                cout<<"Maximum is: "<<b<<endl;
            else
                cout<<"Maximum is: "<<c<<endl;
            if (a<=b && a<=c)
               cout<<"Minimum is: "<<a<<endl;
            else if (b <= c)
                cout<<"Minimum is: "<<b<<endl;
            else
                cout<<"Minimum is: "<<c<<endl;
		}
};


	int main()
	{
		set A;
		A.input();
		A.display();

		return 0;
	}