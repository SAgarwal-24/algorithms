#include "linked-list.h"

/*
 * You are given the pointer to the head node of a linked list and you need to print all its elements in reverse order from tail to head, one element per line. The head pointer may be null meaning that the list is empty - in that case, do not print anything!

Input Format

You have to complete the void reversePrint(SinglyLinkedListNode* head) method which takes one argument - the head of the linked list. You should NOT read any input from stdin/console.

The first line of input contains , the number of test cases.
The input of each test case is as follows:

The first line contains an integer , denoting the number of elements in the list.
The next n lines contain one element each, denoting the elements of the linked list in the order.

Complete the reversePrint function in the editor below and print the elements of the linked list in the reverse order, each in a new line.
 */

void reversePrint(ListNode* head) {
    stack<int> st;
    while(head) {
        st.push(head->val);
        head = head->next;
    }

    while(!st.empty()) {
        cout << st.top() << '\n';
        st.pop();
    }
}