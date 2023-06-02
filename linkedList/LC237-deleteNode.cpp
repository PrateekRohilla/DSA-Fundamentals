//https://leetcode.com/problems/delete-node-in-a-linked-list/
//delete node in a LL when the node is given
//or node to be deleted is given. you will not have access to first node (head)

#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};