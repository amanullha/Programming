#include<bits/stdc++.h>
#include <iostream>
#define pb push_back
#define pf              printf
#define M 10
#define L "\U0001F602"
#define A "\U0001F621"
#define N "\U0001F641"
using namespace std;

int score_s,score_f;
string value[M];
string player_f, player_s;

void Initial()
{
	for (int i = 1; i < M; i++)value[i] = to_string(i);
}


void print()
{
	cout << "\n\n\t\t\t\t\t   ----------------------\n" << "\t\t\t\t\t";
	for (int i = 1; i < M; i++)
	{
		cout << "   |  " << value[i];
		if (i % 3 == 0)
		{
			cout << "   |  ";
			if (i != 9)cout << endl << "\t\t\t\t\t   ------- ------ -------\n\t\t\t\t\t";
		}
	}
	cout << "\n\t\t\t\t\t   ----------------------\n" << "\t\t\t\t";

}

bool draw()
{
	int c = 0;
	for (int i = 1; i < M; i++)
	{
		if (value[i] == A || value[i] == L)c++;
	}
	return c == 9;
}

bool goal( string s)
{

	if (value[1] == s && value[2] == s && value[3] == s)return true;
  if (value[4] == s && value[5] == s && value[6] == s)return true;
	if (value[7] == s && value[8] == s && value[9] == s)return true;

	if (value[1] == s && value[4] == s && value[7] == s)return true;
  if (value[2] == s && value[5] == s && value[8] == s)return true;
	if (value[3] == s && value[6] == s && value[9] == s)return true;

	if (value[1] == s && value[5] == s && value[9] == s)return true;
	if (value[3] == s && value[5] == s && value[7] == s)return true;

	return false;
}

bool valid(int x)
{
  if(x<1 || x>9) return false;
if(value[x]!=L && value[x]!=A)return true;
else return false;
}

void input(string s)
{
  	int n;
	cin >> n;
  while(valid(n)==false)
  {
    if(n<1 || n>9)
    {
      cout<<"Your entered INVALID number\n";
      cout<<"Please enter a BOX number between 1 to 9 : ";
    }
    else
    {
    cout<<"This BOX already fill up\n";
    cout<<"Please Enter another BOX number : ";
    }
    cin>>n;
  }
	value[n] = s;
	print();
	return;
}

void win_print(string s)
{
	cout << "\n\n\t\t\t\t\t WINNER OF THIS GAME IS : " << s;
  if(s==L)cout<<"   ("<<player_f<<" )"<<endl;
  else cout<<"   ("<<player_s<<" )"<<endl;

	cout << "\n\t\t\t\t\t\t\t   Game over\n\n";
	return;
}

void game_start()
{

	string input_A = L, input_B = A;
	int start = 1;

	while (1)
	{
		if (start & 1)
		{
			cout << "\n"<<player_f<<"("<<L<<"  ) : ";
			input(input_A);
			if (goal(input_A))
			{
				win_print(input_A);
				score_f++;
				return;
			}
			else if (draw())
			{
  cout << "\n\n\t\t\t\t\t\t\t   GAME DRAW\n\n";
				return;
			}
		}
		else
		{
			cout << "\n"<<player_s<<"("<<A<<"  ) : ";
			input(input_B);

			if (goal(input_B))
			{
				win_print(input_B);
				score_s++;
				return;
			}
			else if (draw())
			{
  cout << "\n\n\t\t\t\t\t\t\t   GAME DRAW\n\n";
				return;
			}
		}
		start++;
	}



}

int main()
{
	cout << "\n\n\t\t\t\t\t\t  *****************\n";
	cout << "\t\t\t\t\t\t  *  TIC-TAC-TOE  *\n\t\t\t\t\t\t  *****************";
	Initial();
	print();

	cout << endl << endl;


	cout << "\t\t\tVirtical, Horizontal and Diagonal anyway if 3 HEAD\n\t\t\t\t are Same, He/She will win the GAME !\n\n";
	cout << "\t\t\tEnter 's' for starting the GAME or Enter anything \n\t\t\t\t\t\t\tfor EXIT !\n\n";

	bool first_time = 1;
	char dis;
	cin >> dis;
	while (dis == 's' || dis == 'S')
	{
		if (first_time)
		{
			cout << "\nEnter the name of First player : ";
			cin >> player_f;
			cout << "Enter the name of Second player : ";
			cin >> player_s;

			cout << "\n\t\t\t\t\t  First Player Head is : " << L<<"   ("<<player_f<<" )"<<endl;

			cout << "\t\t\t\t\t  Second Player Head is: " << A<<"   ("<<player_s<<" )"<<endl;
			cout << "\n\t\t\t Player will fill up the BOX with the BOX NUMBWE\n";
		}

		cout << "\n\t\t\t\t\t\tLETS START THE GAME!\n\n";
    
		Initial();
    print();
		game_start();

		cout<<"\t\t\t\t\t\tScore of the First Player : "<<score_f<<endl;
		cout<<"\t\t\t\t\t\tScore of the Second Player: "<<score_s<<endl<<endl;

		cout << "\t\t\t\tIf You want to play AGAIN please enter 's' \n \t\t\t\t\tor Enter anything for EXIT\n";
		cin >> dis;
		if(dis == 's' || dis == 'S')first_time=0;
	}


	cout << "\t\t\t\tTHANKS FOR THE PARTICIPATING IN THIS GMAE !\n";





	return 0;
}
