//week13-2b.cpp 學習計畫 Linked List 第1題
//中間練習的程式
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = new ListNode(888);
        ans->next = ans2;
        return ans;
    }
};
