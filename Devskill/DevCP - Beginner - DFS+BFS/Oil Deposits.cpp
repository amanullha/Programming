#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 101
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int move_i[]={+0,+0,-1,+1,+1,+1,-1,-1};
int move_j[]={-1,+1,+0,+0,-1,+1,-1,+1};

int m, n;
char g[M][M];

void dfs(int i,int j)
{
	if(i<0 || i>m || j<0 || j>n)return;

	if(g[i][j]=='@')
	{
		g[i][j]='#';
		for(int k=0;k<8;k++)
		{
			dfs(i+move_i[k],j+move_j[k]);
		}


	}
}


int main()
{
	while (cin >> m >> n)
	{

		if(m==0)break;


		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> g[i][j];
			}
		}

		int count=0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if(g[i][j]=='@')
				{
					dfs(i,j);
					count++;
				}
			}
		}



//cout<<"count : ";
cout<<count<<endl;






	}


	return 0;
}
