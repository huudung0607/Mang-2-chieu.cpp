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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	int maxsum = 0;
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			int sum = 0;
			sum += a[i][j] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j - 1] + a[i + 1][j + 1] + a[i - 1][j - 1] + a[i - 1][j + 1] + a[i - 1][j];
			if (sum > maxsum)
			{
				maxsum = sum;
			}
		}
	}
	cout << maxsum;
}
