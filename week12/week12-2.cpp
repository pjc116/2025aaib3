// week13-2.cpp 學習計畫 Math 第3題
// LeetCode 960. Lemonade Change 找零錢
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;
        for(int bill : bills){
            if(bill==5) d5++;   //拿到5元
            else if(bill==10){
                if(d5>0){   //還有5元
                    d10++;  //拿到10元
                    d5--;   //還客人5元
                } else return false;
            } else if(bill==20){
                if(d5>0 && d10>0){
                    d20++;  //收20
                    d10--;  //找10
                    d5--;   //找5
                } else if(d5>=3){
                    d20++;  //收20
                    d5 -=3; //找3個5元
                } else return false;
            }
        }
        return true;
    }
};
