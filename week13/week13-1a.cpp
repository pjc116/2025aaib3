//week13-1a.cpp
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter two integers: " << endl;
	int a, b;
	cin >> a >> b;
	int ans = 1;
	for(int i=1; i<=a; i++){
		if(a%i==0 && b%i==0) ans = i;
	}
	cout << "The greatest common divisor of ";
	cout << a << " and " << b << " is ";
	cout << ans << endl;
}
