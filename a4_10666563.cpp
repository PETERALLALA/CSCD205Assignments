#include <iostream>
using namespace std;

int gcd(int num1, int num2);

int main()
{
   int num1, num2;

   cout << "Enter two positive integers: ";
   cin >> num1 >> num2;

   cout << "The G.C.D of " << num1 << " and " <<  num2 << " is: " << gcd(num1, num2);

   return 0;
}

int gcd(int num1, int num2)
{
    if (num2 != 0)
       return gcd(num2, num1%num2);0
    else
       return num1;
}
