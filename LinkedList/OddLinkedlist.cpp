#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* oddEvenlinkedlist(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* ODD = head;
        ListNode* EVEN = head->next;
        ListNode* Evenrem = head->next;

        while (EVEN != NULL && EVEN->next != NULL) {
            ODD->next = EVEN->next;
            ODD = ODD->next;

            EVEN->next = ODD->next;
            EVEN = EVEN->next;
        }

        ODD->next = Evenrem;

        return head;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution obj;

    head = obj.oddEvenlinkedlist(head);

    printList(head);

    return 0;
}