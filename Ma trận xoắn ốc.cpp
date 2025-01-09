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
int a[505][505];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int hang1 = 0;
	int cot1 = 0;
	int hang2 = n - 1;
	int cot2 = n - 1;
	int dem = 1;
	while (hang1 <= hang2 && cot1 <= cot2)
	{
		for (int i = cot1; i <= cot2; i++)
		{
			a[hang1][i] = dem;
			dem++;
		}
		hang1++;
		for (int i = hang1; i <= hang2; i++)
		{
			a[i][cot2] = dem;
			dem++;
		}
		cot2--;
		if (cot1 <= cot2)
		{
			for (int i = cot2; i >= cot1; i--)
			{
				a[hang2][i] = dem;
				dem++;
			}
			hang2--;
		}
		if (hang1 <= hang2)
		{
			for (int i = hang2; i >= hang1; i--)
			{
				a[i][cot1] = dem;
				dem++;
			}
			cot1++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
