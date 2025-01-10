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
	map <int, int> mp;
	for (int i = 0; i < n; i++)
	{
		set<int> se;
		for (int j = 0; j < n; j++)
		{
			se.insert(a[i][j]);
		}
		for (auto x : se)
		{
			mp[x]++;
		}
	}
	vector<int> res;
	for (pair<int, int> pa : mp)
	{
		if (pa.second == n)
		{
			res.push_back(pa.first);
		}
	}
	if (res.empty())
	{
		cout << "NOT FOUND" << endl;
	}
	else
	{
		for (auto x : res)
		{
			cout << x << " ";
		}
	}
}
