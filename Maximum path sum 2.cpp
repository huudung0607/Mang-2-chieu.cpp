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
int dx[3] = { 1,1,1 };
int dy[3] = { -1,0,1 };
int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	vector<vector<int>>res(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int j = 0; j < n; j++)
	{
		res[0][j] = a[0][j];
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			res[i][j] = a[i][j];
			int maxsum = res[i - 1][j];
			for (int k = 0; k < 3; k++)
			{
				int i1 = i - dx[k];
				int j1 = j - dy[k];
				if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n)
				{
					maxsum = max(maxsum, res[i1][j1]);
				}
			}
			if (maxsum == INT_MIN)
			{
				res[i][j] += 0;
			}
			else
			{
				res[i][j] += maxsum;
			}
		}
	}
	int ans = *max_element(res[n - 1].begin(), res[n - 1].end());
	cout << ans;
}

