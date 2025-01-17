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
long long C[1001][1001];
void tohop()
{
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				C[i][j] = 1;
			}
			else
			{
				C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
				C[i][j] %= mod;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	tohop();
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		cout << C[n][k] << endl;
	}
}
