#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
using namespace std;
const int mod = 1e9 + 7;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int n, m, a[505][505];
long long F[505][505];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			F[i][j] = max(F[i - 1][j], F[i][j - 1]) + a[i][j];
		}
	}
	cout << F[n][m];
}
