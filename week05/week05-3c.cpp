/// week05-3c.cpp �T�X�@
/// CPE �o�����ĤG�D UVA 483 Word Scramble ��r�ˤ�
#include <iostream>
#include <string>
#include <sstream> /// part 3: �Φr��Ψ��_�r
#include <algorithm> /// part 4: �ϹL�ӡA�n�Ψ� algorithm �t��k
using namespace std;
int main()
{
    string line; /// part 1: input
    while(getline(cin, line))
    ///Ū�J1��A�@��Ū�AŪ��Ctrl-z�~����
    {
        stringstream ss(line); /// part 3: �Φr��Ψ��_�r
        string word;
        ss >> word; /// part 5: �ѨM���D�A�����Y�u���ΪŮ�v
        reverse(word.begin(), word.end());
        cout << word; /// part 5: �ѨM���D�A�����Y�u���ΪŮ�v
        while(ss >> word)/// part 3: �Φr��Ψ��_�r
        {
            reverse(word.begin(), word.end()); /// part 4: �ϹL��
            cout << " " << word;
        }
        /// part 2: output
        cout << endl;
    }
}
