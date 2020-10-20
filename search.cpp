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

bool preorderr(node *root,int k)
{
	if(root==NULL)
		return false;
	if(root->data==k)
		return true;
	bool res1=preorderr(root->left,k);
	if(res1)
		return true;
	bool res2=preorderr(root->right,k);

	return res2;
}

int main()
{
	node *root=new node(3);
	root->left=new node(2);
	root->right=new node(5);
	root->left->left=new node(1);
	root->right->left=new node(4);
	root->right->right=new node(6);
	root->right->right->right=new node(7);
	if(preorderr(root,40)==true)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	
	if(preorderr(root,4)==true)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}