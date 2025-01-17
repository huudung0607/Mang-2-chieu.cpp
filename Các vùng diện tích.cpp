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
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };
char a[505][505];
int n, m, dem = 0;
void loang(int i, int j)
{
	dem++;
	a[i][j] = '.';
	for (int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && a[i1][j1] == '*')
		{
			loang(i1, j1);
		}
	}
}	
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	multiset<int>se;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == '*')
			{
				dem = 0;
				loang(i, j);
				se.insert(dem);
			}
		}
	}
	for (auto x : se)
	{
		cout << x << " ";
	}
}
