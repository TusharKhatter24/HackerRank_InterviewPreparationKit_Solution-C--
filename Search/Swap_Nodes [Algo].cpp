class BinaryTreeNode {
   public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void printLevelWise(BinaryTreeNode *root) {
    if(root==NULL)
{return;}
    queue<BinaryTreeNode*>  pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        BinaryTreeNode* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        if(front->left!=NULL)
        cout<<"L:"<<front->left->data<<",";
        else
         cout<<"L:"<<-1<<",";
        if(front->right!=NULL)
        cout<<"R:"<<front->right->data<<endl;
        else
        cout<<"R:"<<-1<<endl;
        
        if(front->left!=NULL)
        {pendingNodes.push(front->left);}
        if(front->right!=NULL)
        {
        pendingNodes.push(front->right);
        }
    }
}

BinaryTreeNode *swap (BinaryTreeNode *root,int k,int i){
    if(root==NULL){
        return root;
    }
    if(i==k){
        BinaryTreeNode* newnode=NULL;
        newnode=root->left;
        root->left=root->right;
        root->right=newnode;
        root->left=swap(root->left,k,1);
        root->right=swap(root->right,k,1);
        return root;
    }
    root->left=swap(root->left,k,i+1);
    root->right=swap(root->right,k,i+1);
    return root;
}
BinaryTreeNode *maketree (vector<int> v){
    unordered_map<int, BinaryTreeNode *>m;
    for(int i=0;i<v.size();i++){
        if(v[i]==-1){
            continue;
        }
        BinaryTreeNode *root = new BinaryTreeNode(v[i]);        
        m[v[i]]=root;    
    }    
    int i=0,l=1,r=2;
    while(i<v.size()){
        if(v[i]==-1){
            i++;
            continue;
        }
        if(v[l]!=-1){
            m[v[i]]->left=m[v[l]];
        }
        if(v[r]!=-1){
            m[v[i]]->right=m[v[r]];
        }
        l+=2;
        r+=2;
        i++;
    }
    return m[v[0]];
}
void printinorder(BinaryTreeNode *root,vector <int> & v) {
    if(root==NULL){
        return;
    }
    if(root->left!=NULL){
        printinorder(root->left,v);
    }
    v.push_back(root->data);
    if(root->right!=NULL){
        printinorder(root->right,v);
    }
}

vector<vector<int>> swapNodes(vector<vector<int>> indexes, vector<int> queries) {
    vector<vector<int>> ans;
    vector<int> v;
    v.push_back(1);
    for(long unsigned int i=0;i<indexes.size();i++){
        for(int j=0;j<2;j++){
            v.push_back(indexes[i][j]);
        }
    }
    BinaryTreeNode *root=maketree(v);
    printLevelWise(root);		// to check our tree
    for(int i=0;i<queries.size();i++){
        root=swap(root,queries[i],1);
        vector<int>temp;
        printinorder(root,temp);
        ans.push_back(temp);
    }
    printLevelWise(root);		// to check the final tree
    return ans;
}
