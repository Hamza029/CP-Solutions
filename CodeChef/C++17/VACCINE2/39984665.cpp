#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n, d, risky = 0, not_risky = 0, days1, days2, total_days, val;
		cin >> n >> d;
		vector <int> vec;
		for(int i = 0; i < n; i++)
		{
			cin >> val;
			vec.push_back(val);
			if(val >= 80 || val <= 9) risky++;
			else not_risky++;
		}
		days1 = ceil((float)risky/(float)d);
		days2 = ceil((float)not_risky/(float)d);
		total_days = days1 + days2;
		cout << total_days << endl;
	}
}