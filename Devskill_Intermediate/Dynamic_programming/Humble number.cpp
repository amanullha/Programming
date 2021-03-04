
#include <unordered_map>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#define ll long long
#define M 2000000000
#define sz 5845
using namespace std;

unordered_map<ll, bool>un;

ll nbr[] = {2, 3, 5, 7};

ll idx = 1;

void hbl(ll n)
{
	if (un.find(n) != un.end() || n > M)return;
	if (un.size() > sz)return (void)"does not print";

	un[n] = true;

	for (ll i = 0; i < 4; i++)
	{
		hbl(n * nbr[i]);
	}

}

int main()
{

	vector<int>h;
	h.push_back(0);

	hbl(1);
	for (auto x : un)
	{
		h.push_back(x.first);
	}
	sort(h.begin(), h.end());

	ll n;

	while (cin >> n && n)
	{
		if (n%10 == 1 && n%100!=11)cout << "The " << n << "st humble number is " << h[n] << "." << endl;

		else if (n%10 == 2 && n%100!=12)cout << "The " << n << "nd humble number is " << h[n] << "." << endl;

		else if (n%10== 3 && n%100!=13)cout << "The " << n << "rd humble number is " << h[n] << "." << endl;

		else
			cout << "The " << n << "th humble number is " << h[n] << "." << endl;
	}

	return 0;
}
