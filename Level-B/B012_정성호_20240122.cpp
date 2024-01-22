#include <bits/stdc++.h>
#include <pthread.h>

using namespace std;

class Node{
    public:
	Node * left;
	Node * right;
	int val;
	Node(int n){
	    val = n;
	    left = 0x0;
	    right = 0x0;
	}
};


class Tree{
    public:
	Node * root;
	Tree(){
	    root = 0x0;
	}

	void insert(int n){
	    if(root == 0x0){
		root = new Node(n);
		return;
	    }
	    insert(root, n);
	}
	void insert(Node * node, int n){
	    if(node->val > n){
		if(node->left) return insert(node->left, n);
		node->left = new Node(n);
		return;
	    }
	    if(node->val < n){
		if(node->right) return insert(node->right, n);
		node->right = new Node(n);
		return;
	    }
	    
	}
	void trav(){
	    trav(root);
	}
	void trav(Node * node){
	    if(node->left) trav(node->left);
	    if(node->right) trav(node->right);
	    cout << node->val << endl;
	}


};
    

int main(){
    int in;
    Tree * t = new Tree();

    while(cin >> in){
	if(in == EOF) break;
	t->insert(in);
    }
    t->trav();


}

