#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
int a[505][505];

int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int n, m, s, t, u, v;

bool loang(int i, int j) {
	if (i == u && j == v) {
		return true;
	}
	a[i][j] = 0;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 <= n && i1 >= 1 && j1 <= m && j1 >= 1 && a[i1][j1] == 1) {
			if (loang(i1, j1))return true;
		}
	}
	return false;
}
int main()
{
	 cin >> n >> m;
	 cin >> s >> t >> u >> v;
	 for (int i = 1; i <= n; i++)
	 {
		 for (int j = 1; j <= m; j++)
		 {
			 cin >> a[i][j];
		 }
	 }
	 if (loang(s, t)) {
		 cout << "YES";
	 }
	 else
	 {
		 cout << "NO";
	 }
}

