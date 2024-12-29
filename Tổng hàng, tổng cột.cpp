#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
bool isprime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i  ==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		long long sum1 = 0;
		for (int j = 0; j < m; j++)
		{
			sum1 += a[i][j];
		}
		cout << sum1 << " ";
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		long long sum2 = 0;
		for (int j = 0; j < n; j++)
		{
			sum2 += a[j][i];
		}
		cout << sum2 << " ";
	}
}
