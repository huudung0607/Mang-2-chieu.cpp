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
using namespace std;
const int mod = 1e9 + 7;
int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { -1,0,1,-1,1,-1,0,1 };
int a[505][505];
long long F[505][505];
int n, m;
void floodfill(int i, int j)
{
	a[i][j] = 0;
	for (int k = 0; k < 8; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && a[i1][j1] == 1)
		{
			floodfill(i1, j1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1) F[i][j] = a[i][j];
			else F[i][j] = max({ F[i - 1][j], F[i - 1][j - 1], F[i - 1][j + 1] }) + a[i][j];
		}
	}
	long long maxValue = INT_MIN;
	for (int j = 1; j <= n; j++) {
		maxValue = max(maxValue, F[n][j]);
	}
	cout << maxValue;
}
