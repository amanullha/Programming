#include<bits/stdc++.h>
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
#define M 1000002
#define ll long long
using namespace std;
vector<ll> v;


void div(ll n)
{

	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i != (n / i))
			{
				if (i % 2 == 1)
					v.push_back(i);

				if ((n / i) % 2 == 1)
					v.push_back(n / i);
			}

			else {
				if (i % 2 == 1)
					v.push_back(i);
			}
		}
	}
	if (n & 1)
		v.push_back(n);
}



int main()
{
	int t;
	cin >> t;

	while (t--)
	{

		ll n;
		cin >> n;


		//cout << endl << n << ": " << endl;

		if (n == 1) {cout << "FastestFinger" << endl; continue;}
		else if (n == 2 || n % 2 == 1) {cout << "Ashishgup" << endl; continue;}


		else
		{
			bool ok=n & (n - 1) ;
			//cout<<ok<<endl;
			if (ok == 0)
			{
				//cout<<"sc\n";
				cout << "FastestFinger\n";
			}

			else
			{
				//cout<<"else \n";
				v.clear();
				div(n/2);
				if(!v.empty())
				{
					cout<<endl<<"div"<<endl;
					for(int x:v)cout<<x<<" ";
						cout<<endl;

				int c = 0;
				while (n > 1)
				{
					bool f = 1;
					for (int i = v.size() - 1; i >= 0; i--)
					{
						//cout<<n<<" v "<<v[i]<<"  /  "<<endl;
						//cout<<"aman"<<endl;
						if (n % v[i] == 0)
						{
							//cout<<n<<" v "<<v[i]<<"  /  "<<n/v[i]<<endl;
							n = n / v[i];
							f = 0;
							break;
						}
						//else
						//v.erase(v.begin() + i);

						//cout<<i<<endl;
					}
					if (f)n -= 1;
					c++;

					//cout<<"n  "<<n<<"   c  "<<c<<endl;

				}
				if (c == 0 || c % 2 == 0)
					cout << "1FastestFinger" << endl;

				else
					cout << "1Ashishgup" << endl;
			}
			else
			{
				if (n%2==0)
					cout << "2Ashishgup" << endl;

				else
					cout << "2FastestFinger" << endl;
			
			}



			}
		}


	}


	return 0;
}