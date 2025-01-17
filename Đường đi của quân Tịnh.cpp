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
int dx[4] = { -1,-1,1,1 };
int dy[4] = { -1,1,-1,1 };
int a[505][505];
int n, s, t, ans = 0;
void loang(int i, int j)
{
	ans++;
	a[i][j] = 1;
	for (int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && j1 >= 0 && i1 < n && j1 < n && a[i1][j1] == 0)
		{
			loang(i1, j1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> s >> t;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	s--; t--;
	loang(s, t);
	cout << ans;
}
