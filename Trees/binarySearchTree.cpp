#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void PreOrder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(node *root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(node *root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    cout<<"Pre-order traversal: ";
    PreOrder(root);
    cout<<endl<<"In-order traversal: ";
    InOrder(root);
    cout<<endl<<"Post-order traversal: ";
    PostOrder(root);
    return 0;
    
}