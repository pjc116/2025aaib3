/// week04-1.cpp
/// �Ʋ� vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;///�S���g�L��l�Ƥj�p���׬�0
    cout << "�S���g�L�u��l�ơv a�����׬O: " << a.size() << endl;
    a.push_back(99);
    cout << "�g�L.push_back()�� a��������: " << a.size() << endl;

    vector<int> b(3);
    cout << "b�����׬O: " << b.size() << endl;/// �w�]�ȳ��O0
    b.push_back(99);
    for(int i=0; i<b.size(); i++) cout << b[i] << " "; /// 0 0 0 99
    cout << "�g�L.push_back(99)�� b�ܪ��F" << endl;

    vector<int> c(3, 88);
    for(int k=0; k<c.size(); k++) cout << c[k] << " ";
    cout << "��l�� (3, 88) �N�|�O 3 �� 88" << endl;
}
