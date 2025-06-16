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
BST_Node:: BST_Node(){
	left = nullptr;
	right = nullptr;
	name = "";
	adress = "";
	account_number = 0;
	password = 0;
	balance = 0;
}
BST_Node:: BST_Node(string name, string adress, int accountno, int password, int balance){
	left = nullptr;
	right = nullptr;
	this->name = name;
	this->account_number = accountno;
	this->adress = adress;
	this->balance = balance;
	this->password = password;
}
