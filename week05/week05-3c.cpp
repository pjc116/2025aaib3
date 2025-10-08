/// week05-3c.cpp 三合一
/// CPE 這次的第二題 UVA 483 Word Scramble 把字弄反
#include <iostream>
#include <string>
#include <sstream> /// part 3: 用字串用來斷字
#include <algorithm> /// part 4: 反過來，要用到 algorithm 演算法
using namespace std;
int main()
{
    string line; /// part 1: input
    while(getline(cin, line))
    ///讀入1行，一直讀，讀到Ctrl-z才結束
    {
        stringstream ss(line); /// part 3: 用字串用來斷字
        string word;
        ss >> word; /// part 5: 解決問題，火車頭「不用空格」
        reverse(word.begin(), word.end());
        cout << word; /// part 5: 解決問題，火車頭「不用空格」
        while(ss >> word)/// part 3: 用字串用來斷字
        {
            reverse(word.begin(), word.end()); /// part 4: 反過來
            cout << " " << word;
        }
        /// part 2: output
        cout << endl;
    }
}
