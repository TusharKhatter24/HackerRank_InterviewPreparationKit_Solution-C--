DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    DoublyLinkedListNode *smallAns = reverse(head -> next);

    DoublyLinkedListNode *tail = head -> next;
    tail -> next = head;
    head -> prev = tail;
    head -> next = NULL;
    return smallAns;
    
}