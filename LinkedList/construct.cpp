#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *ConvertarrtoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthofLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int findtheelement(Node* head,int val){
    Node *temp = head;
    while (temp != nullptr)
    {
        if(temp -> data == val) return 1;
        temp = temp->next;       
    }
    return 0;
}
int main()
{
    vector<int> arr = {2, 4, 5, 7, 8};
    Node *head = ConvertarrtoLL(arr);
    // cout << lengthofLL(head);
    // Node *temp = head;
    // while (temp != nullptr)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    cout<<findtheelement(head,4);
}