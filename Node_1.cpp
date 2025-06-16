#ifndef NODE_1_H
#define NODE_1_H

class Node_1{
public:
	Node_1* next;
	int accountNumber;
	int password;
	Node_1(){
		next = nullptr;
		accountNumber = 0;
		password = 0;
	}
	Node_1(int a, int p){
		next = nullptr;
		accountNumber = a;
		password = p;
	}
};

#endif
