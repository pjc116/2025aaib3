/// week05-1.cpp
/// LeetCode �ǲ߭p�e Built-In Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// ��r�� string �� iostream �� cin �ӥ�
        string word; /// �r��
        ///ss >> word; // �� cin >> word �@�ˡA�{�b�� ss �i�H�� ss >> word;
        while(ss >> word)
        {
            ///�L��Ū�Jword
        }
        return word.length();
    }
};
