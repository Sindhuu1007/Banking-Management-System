#ifndef BST_NODE_H
#define BST_NODE_H

# include <bits/stdc++.h>
using namespace std;

class BST_Node {
public:
	BST_Node * left;
	BST_Node * right;
	string name;
	string adress;
	int account_number;
	int password;
	int balance;

	BST_Node();
	BST_Node(string, string, int, int, int);
	
};
