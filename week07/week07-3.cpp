/// week07-3.cpp
/// 682. Baseball Game 計算點數
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; /// part: 4
        for(string op : operations) /// part 1: C++進階迴圈
        {
            cout << "現在讀到了: " << op << endl; ///part 2: 看他是誰
            ///part 3: 堆 if 判斷要怎麼模擬
            if(op[0]=='C')
            {
                a.pop_back();
            }
            else if(op[0]=='D')
            {
                a.push_back(a.back()*2);
            }
            else if(op[0]=='+')
            {
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp + temp2);
            }
            else
            {
                a.push_back(stoi(op)); /// part 4
            }
        }
        int ans = 0;
        for(int now : a) /// part 5
        {
            ans += now;///cout << now << " "; /// part 2
        }
        return ans;
    }
};
