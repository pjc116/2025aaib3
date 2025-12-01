/// week02-2.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "請輸入數字:";
    string a, ans;
    cin >> a;
    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];
    }
    cout << a << ans;
}
