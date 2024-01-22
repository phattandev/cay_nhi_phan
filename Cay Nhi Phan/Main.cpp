#include "Header.h"

int main() {
	BST root;
	init(root);
	createBST(root);
	LRN(root);

	//Chieu cao
	cout << "\nChieu cao cua cay: " << height(root);

	//Tim node
	typeinfo y;
	cout << "\nNhap gia tri muon tim: ";
	cin >> y;
	if(timNode(root,y) == NULL)
	cout << y << " nam o dia chi: " << timNode(root, y);

	//Tim node Max
	return 0;
}