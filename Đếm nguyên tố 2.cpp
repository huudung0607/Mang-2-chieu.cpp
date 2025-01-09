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
using namespace std;
const int mod = 1e9 + 7;
int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { -1,0,1,-1,1,-1,0,1 };
int a[505][505];
bool prime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	set<int> se;
	for (int i = 0; i < n; i++)
	{
		if (prime(a[i][i]) && se.find(a[i][i]) == se.end())
		{
			se.insert(a[i][i]);
			cnt++;
		}
		if (prime(a[i][n - i - 1]) && se.find(a[i][n - i -1]) == se.end())
		{
			se.insert(a[i][n - i - 1]);
			cnt++;
		}
	}
	cout << cnt;
}
