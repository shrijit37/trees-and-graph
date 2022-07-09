#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *right;
    struct node *left;
    
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
// 3 kinds of traveral using recurssion 

void preorder(struct node *ptr)             //root->left->right
{
    if(ptr==NULL) return;
    cout<<ptr->data;
    preorder(ptr->left);
    preorder(ptr->right);
    
}
void inorder(struct node *ptr)              //left->root->right
{
    if(ptr==NULL) return;
    inorder(ptr->left);
    cout<<ptr->data;
    inorder(ptr->right);
}
void postorder(struct node *ptr)            //left->right->root
{
    if(ptr==NULL) return;
    postorder(ptr->left);
    postorder(ptr->right);
    cout<<ptr->data;
}
int main()
{
    struct node *root = new struct node(1);
    root->right = new struct node(9);
    root->left = new struct node(7);
    root->left->left=new struct node(2);
    root->left->right= new struct node(6);
    root->right->right=new struct node(9);
    
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}