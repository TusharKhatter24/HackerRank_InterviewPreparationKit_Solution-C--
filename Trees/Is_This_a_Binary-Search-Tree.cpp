bool checkBST(Node* root, int min = INT_MIN, int max = INT_MAX) {
    if (root == NULL) {
        return true;
    }
    if (root->data < min || root->data > max) {
        return false;
    }
    bool isLeftOk = checkBST(root->left, min, root->data - 1);
    bool isRightOk = checkBST(root->right, root->data+1, max);
    return isLeftOk && isRightOk;
}