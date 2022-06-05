#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N, K;
		cin >> N >> K;
		int sum = 0, cnt = 0;
		int ara[N];
		vector <int> vec;
		int l = N - K;
		for(int i = 1; i <= N; i++)
		{
			vec.push_back(i);
		}
		if(l != 0)
		{
			for(int i = 0; i < N; i+=2)
			{
				vec[i] *= -1;
				l--;
				if(l == 0) break;
			}
		}
		if(l != 0)
		{
			int i;
			if(vec[N-1]<0) i = N-2;
			else i = N-1;
			for(; l != 0; i-=2)
			{
				vec[i] *= -1;
				l--;
			}
		}
		/*for(int i = 0; i < N; i++)
		{
			sum += vec[i];
			if(sum > 0)
			{
				cnt++;
			}
			if(cnt > K)
			{
				vec[i] *= -1;
				vec[i+1] *= -1;
				i = 0;
				cnt = 0;
			}
		}*/
		for(int i = 0; i < N; i++)
		{
			cout << vec[i];
			if(i < N-1) cout << " ";
		}
		cout << endl;
		//cout << cnt << endl;

	}
}
