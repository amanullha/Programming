// Topic: custom comparator
// help link: https://www.youtube.com/watch?v=j85JfgBJtJ8&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=21

#include<bits/stdc++.h>
#include <queue>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long

#define M 10000007
using namespace std;
/*bool comparator(ll up, ll down)
{
	//for one d array or vector
	if (up < down)return false;
	else return true;
}
*/
class Interval {
public:
	ll start, end;
	Interval() {}
	Interval(ll s, ll e)
	{
		start = s;
		end = e;
	}
};

class  comparator {
public:
	ll operator()(Interval a, Interval b)
	{
		bool tr = false, fl = true;

		if (a.start < b.start)return tr;
		else if (a.start > b.start)return fl;
		else
		{
			bool at=fl,af=tr;
			if (a.end > b.end)return at;
			else return af;
		}
	}



};


int main()
{
	/*vector<ll>v;
	/for (ll i = 1; i < 10; i++)v.push_back(i);

	for (ll i = 0; i < (ll)v.size(); i++)cout << v[i] << "  ";
	cout << endl << endl;

	sort(v.begin(), v.end(), comparator);

	for (ll i = 0; i < (ll)v.size(); i++)cout << v[i] << "  ";
	cout << endl << endl;
	*/
	priority_queue<Interval, vector<Interval>, comparator >v;

	for (ll i = 1; i < 10; i++)v.push(Interval{i, i % 2});
	for (ll i = 1; i < 10; i++)v.push(Interval{i, i % 5});

	while (!v.empty())
	{
		cout << v.top().start << "   " << v.top().end << endl;
		v.pop();
	}



	return 0;
}
