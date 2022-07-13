#include<bits/stdc++.h>
using namespace std;

struct node {
    struct node *right;
    struct node *left;
    int data;
    
    node(int val)
    {
       data=val;
       right=left=NULL;
    }
};

vector<vector<int>> levelorder(struct node *root)                                                  
{
     vector<vector<int>> ans;
     if(root==NULL) return ans;
     
     queue<node*> q;
     q.push(root);
     while(!q.empty())
     {
         int size = q.size();
         vector<int> level;
         for(int i=0;i<size;i++)
         {
             node* front = q.front();           //getting the value of the front node
             q.pop();
             if(front->left!=NULL) q.push(front->left);
             if(front->right!=NULL) q.push(front->right);
            //  level.push_back(front->data);
             cout<<front->data<<" ";
         }
        //  ans.push_back(level);
        cout<<endl;
     }
     
     return ans;
}

int main(){
    
    struct node* root = new node(1);
    root->right=new node(2);
    root->left = new node(3);
    root->right->left=new node(4);
    root->right->right=new node(5);
    root->left->left=new node(6);
    
    vector<vector<int>> a = levelorder(root);
    
//     for(int i=0;i<a.size();i++)
//     {
//         for(int j=0;j<a[i].size();j++)
//         {
           
//         }
//         cout<<endl;
//     }
    
}
