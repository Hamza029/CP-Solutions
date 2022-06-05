#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair <ll, ll>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector <ll> pos(n+1), rating(n+1);
    vector <multiset <ll, greater<int>>> kinder(200005);

    for(ll i = 1; i <= n; i++)
    {
        ll r, p;
        cin >> r >> p;
        pos[i] = p;
        rating[i] = r;
        kinder[p].insert(r);
    }

    multiset <ll> res;
    for(auto x: kinder)
    {
        if(x.size() != 0)
        {
            res.insert(*x.begin());
        }
    }

    for(ll i = 0; i < q; i++)
    {
        ll c, d;
        cin >> c >> d;
        ll old_kinder = pos[c];
        ll new_kinder = d;
        ll _rating = rating[c];
        res.erase(res.lower_bound(*kinder[old_kinder].begin()));
        if(!kinder[new_kinder].empty())
            res.erase(res.lower_bound(*kinder[new_kinder].begin()));
        kinder[old_kinder].erase(kinder[old_kinder].lower_bound(_rating));
        kinder[new_kinder].insert(_rating);
        pos[c] = new_kinder;
        if(!kinder[old_kinder].empty())
            res.insert(*kinder[old_kinder].begin());
        res.insert(*kinder[new_kinder].begin());
        cout << *res.begin() << endl;
    }

}

int main()
{
    solve();
}










