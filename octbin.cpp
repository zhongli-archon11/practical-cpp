#include <iostream>
#include <cmath>
using namespace std;

void DecimalToOctal(int decimalNum) {
   int octalNum = 0, placeValue = 1;
   int dNo = decimalNum;
   while (decimalNum != 0) {
      octalNum += (decimalNum % 8) * placeValue;
      decimalNum /= 8;
      placeValue *= 10;
   }
   cout<<"Octal form of decimal number "<<dNo<<" is "<<octalNum<<endl;
}

int main() {
   int Num;
   cout << "Enter an decimal number: ";
   cin >> Num;
   DecimalToOctal(Num);
   //binary
   int a[10], i;
   for(i=0; Num>0; i++)
   {
        a[i]=Num%2;
        Num= Num/2;
   }
   cout<<"Binary of the given number= ";
   for(i=i-1 ;i>=0 ;i--)
   {
        cout<<a[i];
   }

   return 0;
}