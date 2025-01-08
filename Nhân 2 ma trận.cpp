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

	int n, m, p;
	cin >> n >> m >> p;
	vector<vector<int>>a(n, vector<int>(m));
	vector<vector<int>>b(m, vector<int>(p));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cin >> b[i][j];
		}
	}
	vector<vector<long long>> c(n, vector<long long>(p));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < m; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	
}
