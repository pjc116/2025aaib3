/// week05-5.cpp
/// LeetCode �ǲ߭p�e Built-in Functions ��2�D

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};
