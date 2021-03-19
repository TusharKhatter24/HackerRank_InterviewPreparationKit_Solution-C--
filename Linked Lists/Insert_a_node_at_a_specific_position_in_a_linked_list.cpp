SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int i ) {
      if(head==NULL){
        return head;
    }
    if(i==0){
        SinglyLinkedListNode *newNode=new SinglyLinkedListNode(data);
        newNode->next=head;
        return newNode;
    }
    SinglyLinkedListNode *temp=insertNodeAtPosition(head->next,data,i-1);
    head->next=temp;
    return head;
} 