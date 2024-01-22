#include "Header.h"

void init(BST& root) {
	root = NULL;
}


Nodeptr makeNode(typeinfo x) {
	Nodeptr p = new Node;
	if (p == NULL)
		return NULL;
	p->data = x;
	p->left = p->right = NULL;
	return p;
}

void insert(BST& root, typeinfo x) {
	Nodeptr p = makeNode(x);
	if (root == NULL)
		root = p;
	else {
		if (root->data == x)
			cout << "\nNode da ton tai!!!";
		else {
			if (x < root->data)
				insert(root->left, x);
			else 
				insert(root->right, x);
		}
	}
}

void LRN(BST root) {
	if (root != NULL) {
		LRN(root->left);
		LRN(root->right);
		cout << root->data << "\t";
	}
}

void LNR(BST root) {
	if (root) {
		LNR(root->left);
		cout << root->data << "\t";
		LNR(root->right);
	}
}

void NLR(BST root) {
	if (root) {
		cout << root->data << "\t";
		NLR(root->left);
		NLR(root->right);
	}
}

void createBST(BST& root) {
	typeinfo x;
	do {
		cout << "\nNhap gia tri(-99 to stop): ";
		cin >> x;
		if (x == -99)
			break;
		insert(root, x);
	} while (true);
}

int height(BST r) {
	if (r == NULL) return 0;
	int left = height(r->left);
	int right = height(r->right);

	if (left > right)
		return left + 1;
	else
		return right + 1;
}

Nodeptr timNode(BST root, typeinfo x) {
	if (root) {
		if (root->data == x)
			return root;
		else {
			if (x < root->data)
				timNode(root->left, x);
			else
				timNode(root->right, x);
		}
	}
}

int tongCacNode(BST root) {
	if (root == NULL)
		return 0;
	else
		return root->data + tongCacNode(root->left) + tongCacNode(root->right);
}

Nodeptr timNodeMax(BST root) {
	if (root == NULL)
		return 0;
	else if (root->right == NULL)
		return root;
	else
		return timNodeMax(root->right);
}

Nodeptr timNodeMin(BST root) {
	if (root == NULL)
		return 0;
	else if (root->left == NULL)
		return root;
	else
		return timNodeMin(root->right);
}