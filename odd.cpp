#include<iostream>
using namespace std;
class oddsum
{
    private:
        int i,num, sum;
    public:
        oddsum()
        {
            i=0;
            num=0;
            sum=0;
        }
        void calc()
        {
            while (i < 20)
            {
                if(num%2 != 0)
                {
                    sum = sum + num;
                    i++;
                }
            num++;
            }
        }

        void display()
        {
            cout<<"Sum of all odd numbers between 1 to 20 is: "<<sum<<endl;
        }
};

int main()
{
        oddsum s;
        s.calc();
        s.display();

}