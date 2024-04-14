//Breadth-first


#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    char data;
    Node* left;
    Node* right;
};
Node* Insert(Node* root, char data){
    if(root == NULL){
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data) 
    {
        root->left = Insert(root->left, data);//以当前节点的左孩子作为新的根节点root。这次调用将沿着左子树继续寻找插入位置，直到满足递归终止条件。递归调用返回后，将更新后的左子树（可能包含新添加的节点）链接到当前节点的左孩子上。
    }
    else root->right = Insert(root->right, data);
}

//Function to print Nodes in a binary tree in Level order
void LevelOrder(Node *root){
    if(root == NULL) return;
    queue<Node*> Q;
    Q.push(root);
    while ((!Q.empty()))
    {
        Node* current = Q.front();
        Q.pop(); // removing the element at front
        cout << current->data << " ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
    }
}

int main(){
 	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
    Node* root = NULL;
    root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Level Order. 
	LevelOrder(root); 
}