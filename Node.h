#ifndef NODE_H
#define NODE_H
# include <iostream>
using namespace std;
# include <fstream>
# include <string>
# include "Node_1.h"
class Node
{
public:

	Node * next;
	Node_1 * pre;
	int data;
	Node();
	Node(int);
};

#endif
