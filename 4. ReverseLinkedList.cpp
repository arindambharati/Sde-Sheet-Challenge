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
    LinkedListNode<int> *currentNode = head;
    LinkedListNode<int> *prevNode = NULL;
    LinkedListNode<int> *tempNode = head;
    
    while(currentNode!=NULL) {
        tempNode = tempNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = tempNode;
    }
    
    head = prevNode;
    
    return head;
}
