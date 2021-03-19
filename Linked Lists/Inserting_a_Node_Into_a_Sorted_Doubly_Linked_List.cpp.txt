DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    if(head==NULL){
        DoublyLinkedListNode *temp=new DoublyLinkedListNode(data);
        temp->next=NULL;
        temp->prev=NULL;
        return temp;
    }
    if(head->data>data){
        DoublyLinkedListNode *newNode=new DoublyLinkedListNode(data);
        newNode->next=head;
        head->prev=newNode;
        return newNode;
    }
    DoublyLinkedListNode *temp=sortedInsert(head->next,data);
    head->next=temp;
    temp->prev=head;
    return head;
}