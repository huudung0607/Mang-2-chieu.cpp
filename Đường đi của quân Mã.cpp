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
int dx[8] = { -2,-2,-1,-1,1,1,2,2 };
int dy[8] = { -1,1,-2,2,-2,2,-1,1 };
int a[505][505];
int n, s, t, u, v;

void nhap()
{
	cin >> n;
	cin >> s >> t >> u >> v;
	s--; t--; u--; v--;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void loang(int i, int j)
{
	a[i][j] = 0;
	for (int k = 0; k < 8; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 1)
		{
			loang(i1, j1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	nhap();
	if (a[s][t] == 1 && a[u][v] == 1)
	{
		loang(s, t);
		if (a[u][v] == 0)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		cout << "NO";
	}
}
