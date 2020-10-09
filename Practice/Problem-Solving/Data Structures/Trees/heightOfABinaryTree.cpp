
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root == NULL)
        {
            return -1;
        }
        int ls = height(root->left);
        int rs = height(root->right);
        return max(ls,rs) + 1;
    }

