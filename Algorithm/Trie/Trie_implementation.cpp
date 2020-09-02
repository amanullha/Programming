#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define Letter_size 26
using namespace std;


struct Trienode
{
	char val;
	int count;
	int endHere;
	Trienode *child[Letter_size];

	Trienode()
	{
		endHere = false;

		for (int i = 0; i < Letter_size; i++)
			child[i] = NULL;
	}
} ;
Trienode* root;



void insert_word(char* c)
{
	int len = strlen(c);
	Trienode* curr = root;

	for (int i = 0; i < len; i++)
	{
		int idx = c[i] - 'a';

		if (curr->child[idx] == NULL)
			curr->child[idx] = new Trienode();

		curr->child[idx]->count += 1;
		curr = curr->child[idx];

	}
	curr->endHere++;
}



bool search_word(char* c)
{
	int len = strlen(c);
	Trienode* curr = root;
	for (int i = 0; i < len; i++)
	{
		int idx = c[i] - 'a';
		if (curr->child[idx] != NULL)
			curr = curr->child[idx];
		else return false;
	}
	if (curr->endHere)return true;
	else return false;
}

bool pre_fix_word(char* c)
{
	int len = strlen(c);
	Trienode* curr = root;
	for (int i = 0; i < len; i++)
	{
		int idx = c[i] - 'a';
		if (curr->child[idx] != NULL)
			curr = curr->child[idx];
		else return false;
	}
	if (curr->count > 0)return true;
	else return false;
}
int Howmany_pre_fix_word(char* c)
{
	int len = strlen(c);
	Trienode* curr = root;
	for (int i = 0; i < len; i++)
	{
		int idx = c[i] - 'a';
		if (curr->child[idx] != NULL)
			curr = curr->child[idx];
		else return false;
	}
	if (curr->count > 0)return curr->count;
	else return false;
}



void delete_word(char* c)
{
	int len = strlen(c);
	Trienode* curr = root;

	for (int i = 0; i < len; i++)
	{
		int idx = c[i] - 'a';
		if (root->child[idx] != NULL)
			root = root->child[idx];
		else  break;
	}
	if (root->endHere)root->endHere--;
	root = curr;

}


int main()
{
	root = new Trienode();

	while (1)
	{
		getchar();
		cout << "\n\ninsert_word and how many?. press---> 1\nSearch_world and How many?. press--> 2\nSearch_prfid. press--> 3\nCount pre_fix. press--> 4\nDelete word. press--> 5 \nExit. press-->0\n\n";

		int dis;
		cin >> dis;
		if (dis == 0)return 0;
		if (dis == 1)
		{
			int nbr;
			cin >> nbr;
			for (int i = 0; i < nbr; i++)
			{
				char s[100];
				cin >> s;
				//cout << s << " ";

				insert_word(s);
			}
		}
		else if (dis == 2)
		{
			int query;
			cin >> query;
			for (int i = 1; i <= query; i++)
			{
				char str[50];

				cin >> str;
				if (search_word(str))
					puts("FOUND");
				else
					puts("NOT FOUND");
			}
		}
		else if (dis == 3)
		{
			int query;
			cin >> query;
			for (int i = 1; i <= query; i++)
			{
				char str[50];

				cin >> str;
				if (pre_fix_word(str))
					puts("FOUND PRE_FIX");
				else
					puts("NOT FOUND PRE_FIX");
			}
		}
		else if (dis == 4)
		{
			int query;
			cin >> query;
			for (int i = 1; i <= query; i++)
			{
				char str[50];

				cin >> str;
				int ck=Howmany_pre_fix_word(str);
				if (ck)
					pf("\n%d Pre_fix found\n",ck);
				else
					puts("Not pre_fix found");
			}
		}




		else if (dis == 5)
		{
			char str[50];
			cin >> str;

			delete_word(str);
		}

	}

	return 0;
}
