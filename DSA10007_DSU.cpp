#include<bits/stdc++.h>
using namespace std;
int v, e;
int par[1001];

class Edge {
public:
	int a, b, c;
};

void init() {
	for (int i = 1; i <= v; i++) par[i] = i;
}

int find(int x) {
	if (par[x] == x) return x;
	return par[x] = find(par[x]);
}

bool check(int u, int v) {
	u = find(u);
	v = find(v);

	if (u == v) return false;
	par[v] = u;
	return true;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> v >> e;

		vector<Edge> edge;

		for (int i = 0; i < e; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			edge.push_back({ a, b, c });
		}

		sort(edge.begin(), edge.end(), [](Edge& a, Edge& b) {
			return a.c < b.c;
			});

		int res = 0;

		init();

		for (auto x : edge) {
			if (!check(x.a, x.b)) continue;
			res = res + x.c;
		}

		cout << res << endl;
	}


	return 0;
}