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
	cout << "Pattern 1:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	cout << "Pattern 2:" << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Pattern 3:" << endl;
	for (int j = n - 1; j >= 0; j--)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Pattern 4:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
