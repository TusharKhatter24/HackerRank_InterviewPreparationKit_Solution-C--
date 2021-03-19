int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1=head1,*temp2=head2->next;
    unordered_map<SinglyLinkedListNode*,bool>m;
    while(temp1!=NULL){
        m[temp1]=true;
        temp1=temp1->next;
    }
    while(m[temp2]!=true){
        temp2=temp2->next;
    }
    return temp2->data;
} 