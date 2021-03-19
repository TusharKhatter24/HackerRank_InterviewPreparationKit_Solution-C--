#include <unordered_map>
bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    unordered_map<Node*, bool>m;
    while(head!=NULL){
        if(m.count(head)>0){
            return true;
        }else{
            m[head]=true;
            head=head->next;
        }
    }
    return false;
} 