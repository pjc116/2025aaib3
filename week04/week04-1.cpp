/// week04-1.cpp
/// 複習 vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;///沒有經過初始化大小長度為0
    cout << "沒有經過「初始化」 a的長度是: " << a.size() << endl;
    a.push_back(99);
    cout << "經過.push_back()後 a的長度變: " << a.size() << endl;

    vector<int> b(3);
    cout << "b的長度是: " << b.size() << endl;/// 預設值都是0
    b.push_back(99);
    for(int i=0; i<b.size(); i++) cout << b[i] << " "; /// 0 0 0 99
    cout << "經過.push_back(99)後 b變長了" << endl;

    vector<int> c(3, 88);
    for(int k=0; k<c.size(); k++) cout << c[k] << " ";
    cout << "初始化 (3, 88) 就會是 3 個 88" << endl;
}
