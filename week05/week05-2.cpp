/// week05-2.cpp
/// �d�� stringstream
#include <iostream>
#include <string>
#include <sstream> /// string��stream���~��
using namespace std;
int main()
{
    string line;
    getline(cin, line); /// �@��Ū�J�@���r
    cout << line << endl;

    stringstream ss(line);
    string word;
    while(ss >> word)
    {
        cout << "ssŪ��@�Ӧr: " << word << endl;
    }
}
