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

int binarySearch(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			res = m;
			return res;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	int maxval = INT_MIN;
	int minval = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			maxval = max(maxval, a[i][j]);
			minval = min(minval, a[i][j]);
		}
	}
	cout << minval << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == minval)
			{
				cout << i + 1 << " " << j + 1 << endl;
			}
		}
	}
	cout << maxval << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == maxval)
			{
				cout << i + 1 << " " << j + 1 << endl;
			}
		}
	}
}
