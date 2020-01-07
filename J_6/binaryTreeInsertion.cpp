#include<iostream>
#include<queue>
using namespace std;

struct node {
    int data;
    struct node *left, *right;
};

struct node *newnode(int data) {
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}


void insert(struct node *root, int data) {
    struct node *temp;
    queue<struct node*>q;
    q.push(root);
    while(!q.empty()) 
    {
        temp = q.front();
        q.pop();


        if(temp->left == NULL) {
            temp->left = newnode(data);
            break;
        }


        else
            q.push(temp->left);
        

        if(temp->right == NULL) {
            temp->right = newnode(data);
            break;
        }


        else
            q.push(temp->right);
    }
}


void traversal(struct node *root) {
    if(root == NULL)
        return;
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
}


int main() {
    struct node* root = newnode(1);
    root->left = newnode(10);
    root->left->left = newnode(20);
    root->right = newnode(34);
    int key = 12;
    insert(root, key);
    cout << endl;
    cout << "Inorder traversal after insertion: ";
    traversal(root);
}
