//week13-1b.cpp
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a==0) return b;
	if(b==0) return a;
	return gcd(b, a%b);
}
int main()
{
	cout << "Enter two integers: " << endl;
	int a, b;
	cin >> a >> b;
	cout << "The greatest common divisor of ";
	cout << a << " and " << b << " is ";
	cout << gcd(a, b) << endl;
}
