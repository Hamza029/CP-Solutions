#include<bits/stdc++.h>

using namespace std;

#define pii pair <int, int>

bool cmp(pii a, pii b)
{
	return a.first < b.first;
}

int main()
{
	int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;

	int total_days = 0;

	if(d1 == d2)
	{
		total_days += d1 - 1;
		int v = v1 + v2;
		total_days += ceil((float)p/(float)v);
		cout << total_days << endl;
	}
	else
	{
		vector <pii> vec;
		vec.push_back(pii(d1, v1));
		vec.push_back(pii(d2, v2));
		sort(vec.begin(), vec.end(), cmp);

		total_days += vec[0].first - 1;
		int diff = vec[1].first - vec[0].first;
		int p1 = diff * vec[0].second;

		if(p1 > p)
		{
			while(p1 > p)
			{
				p1 -= vec[0].second;
			}
		}

		total_days += p1/vec[0].second;

		int p_left = p - p1;
		int v = v1 + v2;
		total_days += ceil((float)p_left/(float)v);
		cout << total_days << endl;
	}
}
