// week14-1b.cpp
// no cheat! have f(n)
#include <iostream>
using namespace std;
int f(int n)
{
	int ans = 0;
	while(n>0){
		ans = ans*10 + n%10;
		n /= 10;
	}
	return ans;
}
int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;
}
