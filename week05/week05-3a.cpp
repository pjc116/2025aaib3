/// week05-3a.cpp 三合一
/// CPE 這次的第二題 UVA 483 Word Scramble 把字弄反
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string line; /// part 1: input
    while(getline(cin, line))
    ///讀入1行，一直讀，讀到Ctrl-z才結束
    {
        /// part 2: output
        cout << line << endl;
    }
}
