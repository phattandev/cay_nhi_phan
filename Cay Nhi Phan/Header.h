#include <iostream>
using namespace std;

typedef int typeinfo;
struct Node {
	typeinfo data;
	Node* left;
	Node* right;
};
typedef Node* Nodeptr;
typedef Nodeptr BST;

void init(BST& root);
Nodeptr makeNode(typeinfo x);
void LRN(BST root);
void LNR(BST root);
void NLR(BST root);
void createBST(BST& root);
int height(BST r);
Nodeptr timNode(BST root, typeinfo x);
int tongCacNode(BST root);
Nodeptr timNodeMax(BST root);
Nodeptr timNodeMin(BST root);