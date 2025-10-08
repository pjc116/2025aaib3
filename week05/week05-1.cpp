/// week05-1.cpp
/// LeetCode 學習計畫 Built-In Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// 把字串 string 當 iostream 的 cin 來用
        string word; /// 字串
        ///ss >> word; // 像 cin >> word 一樣，現在的 ss 可以用 ss >> word;
        while(ss >> word)
        {
            ///無限讀入word
        }
        return word.length();
    }
};
