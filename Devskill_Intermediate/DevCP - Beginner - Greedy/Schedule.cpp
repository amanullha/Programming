//#include<bits/stdc++.h>
#include <vector> // #include directive
#include <string>
#include <iostream> 
#include <algorithm>
#include<iostream>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
//#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10000007
#define pi pair<ll,ll>
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

bool camp(pi a, pi b)
{
	if (a.first < b.first)return true;
	else if (a.first > b.first)return false;
	else
	{
		if (a.second < b.second)return true;
		else if (a.second > b.second)return false;
	}

}

int main()
{
	//fio;
	ll t;
	//cin >> t;
	sn(t);
	while (t--)
	{
		ll n;
		//cin >> n;
		sn(n);
		vector<ll>ck(n, 1);
		vector<pi >v;
		for (int i = 0; i < n; i++)
		{
			ll start, end;
			//cin >> start >> end;
			snn(start,end);
			v.push_back({start, end});
		}

		sort(v.begin(), v.end(), camp);


		//for (ll i = 0; i <(ll) v.size(); i++)
		//{
		//	cout << v[i].first << "  : " << v[i].second << endl;
		//}




//cout<<endl<<endl;
		ll k = 0, time = 0;
		while (v.size())
		{
			k++;
			ll start, end;
			start = v[0].first;
			end = v[0].second;
			//cout<<v[0].first<<"  : "<<v[0].second<<endl;
			v.erase(v.begin() + 0);

			for (ll i = 1; i < (ll) v.size(); i++)
			{
				if (v[i].first >= end)
				{
					end = v[i].second;
					//cout<<v[i].first<<"  : "<<v[i].second<<endl;
					v.erase(v.begin() + i);
					i--;
				}
			}
			//	cout<<"break"<<endl;
			time += (end - start);
		}

//cout<<endl<<"k "<<k<<"   time "<<time<<endl;
		///cout << k << " " << time << endl;
		pf("%lld %lld\n",k,time);



















	}



	return 0;
}
