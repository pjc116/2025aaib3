/// week05-5.cpp
/// LeetCode 學習計畫 Built-in Functions 第2題

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
