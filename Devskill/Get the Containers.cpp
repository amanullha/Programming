#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>milk;
ll n, con;


bool cap(ll x)

{
	ll container = 1, sum = 0;
	// opore "container" variable ar value 1 deya hoise aii karone je
	//jodhi value akta hoy and mid oii value thake beshi hoy tarpor o oi
	// container ar aii value ke rakha jabe;
	for (ll i = 0; i < (ll )milk.size(); i++)
	{

		//ar mane holo jodhi i-th value e mid value thake boro hoye jay tahole
		// amde aii mid mane capacity aro boro korte hobe , jate kore boro bassel full milk o
		// container a rakha jay
		if (milk[i] > x)return false;

		if (sum + milk[i] > x)
		{	// ar mane holo "sum" variable ar shatehe jodhi amra milk ar i-th bassel ar milk add
			//kori and ata jodhi mid mane capacity thake boro hoy tahole i-th bassel ar milk k amra oii capacity ar
			//container a rakte parbo nah.tai "container" ke 1 plus kora hoise and "sum" ke zero(0) kora hoise , jate
			// i-th bassel ar milk the noton akta "container" a rakha soro kora hoy.
			sum = 0; container++;
		}

		sum += milk[i];

		if (con < container)return false;
		//oporer ar if condition ar mane holo , bessel ar milk jodhi given container ar chaye beshi lage
		// tahole amra false return korbo, karon amder ke bola hoise je, given container ar midde e shob bassel ar mikl
		//rakte hobe , parle given container ar chaye o kon use kora jabe kinto beshi nah


	}

	return true;
}


int main()
{
	ll t;
	cin >> t;
	for (ll tc = 1; tc <= t; tc++) {


		ll tot = 0;
		cin >> n >> con;

		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			tot += x;

			milk.push_back(x);
		}
		ll loop = 80;

		ll l = 1, h = tot, mid = 0;
		ll ans = 0;

		while (loop--)
		{
			mid = l + (h - l) / 2;
			if (cap(mid) == true)
			{
				// amra jei mid ta ber korchi oii ta thik ache ,acceptable
				//kinto oii mid make capacity to aro akto komte o pare
				//tai h=m-1 assign kore deya hiose ,jate bortoman mid thake porer mid
				//ta jate akto kom ase. jodhi kom ase mid mane porer mid ta cap() function ar
				// jorto mane tahole oii ta e new answer hobe,
				ans = mid;
				h = mid - 1;
			}
			else
			{
				// bortoman a jei mid ta asche oii mid ar capacity kom jar fole shob vassel ar milk
				// k shonkon container a rakha jabe nah, tai mid ke mane capacity ke barate hobe. tai l=mid+1 kora hoise ,
				l = mid + 1;
			}



		}

		cout << "Case " << tc << ": " << ans << endl;
		milk.clear();
	}
	return 0;
}