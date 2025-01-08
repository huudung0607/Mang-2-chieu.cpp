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
int thuannghich(int n)
{	
	int temp = n;
	int sum = 0;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (sum == temp)
	{
		return 1;
	}
	return 0;
}
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
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (thuannghich(a[i][j]))
			{
				cnt++;
			}
		}
	}
	cout << cnt;	
}
