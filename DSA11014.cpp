#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int x) {
		data = x;
		left = nullptr;
		right = nullptr;
	}
};
unordered_map<int, Node*> mp;
void connect(Node* r, int u, int v, char c) {
	if (c == 'L') {
		mp[u]->left = new Node(v);// tao phan ben trai cua mp[u] dinh u
		mp[v]=mp[u]->left;// gan dinh v thanh mp[u]->left
	}
	else {
		mp[u]->right = new Node(v);
		mp[v]=mp[u]->right;
	}
}
bool isLeaf(Node* r) {
	if (r->left == nullptr && r->right == nullptr) return true;
	return false;
}
int calc(Node* root) {
	int sum = 0;
	if (root == NULL)
		return sum;
	if (root->right != NULL && isLeaf(root->right)) {
		sum += root->right->data;
	}
	if (root->right != NULL && !isLeaf(root->right)) {
		sum += calc(root->right);
	}
	if (root->left != NULL && !isLeaf(root->left)) {
		sum += calc(root->left);
	}
	return sum;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		mp.clear();
		int n;
		cin >> n;
		Node* root = nullptr;
		while (n--) {
			int u, v;
			char c;
			cin >> u >> v >> c;
			if (root == nullptr) {
				root = new Node(u);
				mp[u] = root;
				connect(root, u, v, c);
			}
			else
				connect(root, u, v, c);
		}
		cout << calc(root) << '\n';
	}
	return 0;
}