void sumatKth(node* root,int k,int level,int &sum){
    if(root==NULL){
        return;
    }
    if(level==k){
        sum=sum+root->val;
        return;
    }
    sumatKth(root->left,k,level+1,sum);
    sumatKth(root->right,k,level+1,sum);
 
}
#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
       this->left=NULL;
       this->right=NULL;
       this->data=data;
    }
};
void builder(node* &root,int data){
    if(root==NULL){
        root=new node(data);
        return;
    }
    if(data<root->data){
        builder(root->left,data);
    }else{
        builder(root->right,data);
    }
}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main(){
    node* root=NULL;
    vector<int>arr={1,2,10,5,18};
    for(int i=0; i<arr.size(); i++){
        builder(root,arr[i]);
    }
    inorder(root);
}
#include <iostream>
using namespace std;
 
struct Node {
    int data;
    Node* left;
    Node* right;
 
   
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};
 
 
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
 
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
 
    return root;
}
 
 
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
 
 
bool search(Node* root, int key) {
    if (root == nullptr) return false;
    if (root->data == key) return true;
 
    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}
 
 
int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
 
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
 
    int key = 60;
    if (search(root, key))
        cout << key << " found in the BST." << endl;
    else
        cout << key << " not found in the BST." << endl;
 
    return 0;
}