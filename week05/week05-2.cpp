/// week05-2.cpp
/// 搞懂 stringstream
#include <iostream>
#include <string>
#include <sstream> /// string變stream的外掛
using namespace std;
int main()
{
    string line;
    getline(cin, line); /// 一次讀入一整行字
    cout << line << endl;

    stringstream ss(line);
    string word;
    while(ss >> word)
    {
        cout << "ss讀到一個字: " << word << endl;
    }
}
