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
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
char a[505][505];
bool visited[505][505];
int n, m;
void floodfill(int i, int j,int& res)
{
	visited[i][j] = true;
	int cnt = 0;
	for (int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '1')
		{
			cnt++;
			if (!visited[i1][j1])
			{
				floodfill(i1, j1, res);
			}
		}
	}
	res = res + 4 - cnt;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			visited[i][j] = false;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == '1' && !visited[i][j])
			{
				int res = 0;
				floodfill(i, j, res);
				v.push_back(res);
			}
		}
	}
	for (auto x : v)
	{
		cout << x << " ";
	}
}
