#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    // Write your code here
    if (head == NULL)
        return NULL;
    LinkedListNode<int> *temp = head;
    LinkedListNode<int> *prev = NULL;
    while (temp != NULL)
    {
        LinkedListNode<int> *tempNext = temp->next;
        temp->next = prev;
        prev = temp;
        temp = tempNext;
    }
    head = prev;
    return head;
}