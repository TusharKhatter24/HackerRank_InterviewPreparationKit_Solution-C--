    int check(Node *root,int v1,int v2){
        if(root==NULL){
            return 0;
        }
        int ans=0;
        if(root->data==v1||root->data==v2)ans++;
        ans+=check(root->left,v1,v2);
        ans+=check(root->right,v1,v2);
        return ans;
    }
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        int a=check(root->left,v1,v2);
        if(a==2){
            return lca(root->left,v1,v2);
        }
        if(a==1){
            return root;            
        }
        if(root->data==v1||root->data==v2)return root;    
        return lca(root->right,v1,v2);
    }