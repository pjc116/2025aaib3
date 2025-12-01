/// week02-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int a, ans = 0;
    cin >> a;
    int b = a;
    while(a>0){
        ans = ans * 10 + a %10;
        a /= 10;
    }
    cout << b << "+" << ans << "=" << b+ans << endl;
}
