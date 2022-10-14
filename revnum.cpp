#include <iostream>
using namespace std;

class Reverse {
 private:
  int number;
 public:
  void reverse(int n)
  {
    number = n;
    int rem, reverse = 0;
    while (number) {
      rem = number % 10;
      reverse = (reverse * 10) + rem;
      number = number / 10;
    }

    cout << "Reverse of " << n << " : " << reverse << endl;
  }
};

int main() {
  Reverse R;
  int number;

  cout << "Enter Number: ";
  cin >> number;
  R.reverse(number);

  return 0;
}
