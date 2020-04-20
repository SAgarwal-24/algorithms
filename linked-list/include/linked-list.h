#pragma once

struct ListNode {
     int val;
     ListNode *next;
     explicit ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head);
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);