#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* temp=NULL;
node* kthAncestorDFS(node *root, int node , int &k) 
{     
    if (!root) 
        return NULL; 
      
    if (root->data == node|| 
       (temp =  kthAncestorDFS(root->left,node,k)) || 
       (temp =  kthAncestorDFS(root->right,node,k))) 
    {    
        if (k > 0)         
            k--; 
          
        else if (k == 0) 
        { 
            // print the kth ancestor 
            cout<<"Kth ancestor is: "<<root->data; 
              
            // return NULL to stop further backtracking 
            return NULL; 
        } 
          
        // return current node to previous call 
        return root; 
    } 
}
int main()
{
    node *root=new node(30);
    root->left=new node(20);
    root->right=new node(50);
    root->left->left=new node(10);
    root->right->left=new node(40);
    root->right->right=new node(60);
    root->right->right->right=new node(70);
    int k=2;
    kthAncestorDFS(root,70,k);
    return 0;
}