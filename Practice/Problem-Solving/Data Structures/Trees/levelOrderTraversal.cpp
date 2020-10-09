
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    int height(Node * root){
        if(root == NULL){
            return -1;
        }
        int ls = height(root->left);
        int rs = height(root->right);
        return max(ls,rs) + 1;
    }

    void printKthlevel(Node *root, int k){
        if(root == NULL){
            return;
        }
        if(k == 1){
            std::cout << root->data << " ";
            return;
        }
        printKthlevel(root->left,k-1);
        printKthlevel(root->right,k-1);
    }

    void levelOrder(Node *root) {
        int H = height(root);
        for(int i = 1; i <= H + 1; i++){
            printKthlevel(root,i);
            std::cout << "";
            
        }
        return;
    }

