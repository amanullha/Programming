#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int extended_euclidean(int a, int b, int &x, int &y)
{
	if (a == 0)
	{
		x = 0;
		y = 1;
		return b;

	}
	int x1, y1;
	int gcd = extended_euclidean(b % a, a, x1, y1);

	x = (-(b / a) * x1) + y1;
	y = x1;


	return gcd;
}

int inverse(int a, int m)
{
	int x, y;
	int g = extended_euclidean(a, m, x, y);

	x = (x % m + m) % m;
	return x;

}


int precedence(char op){
	if(op == '+'||op == '-')
	return 1;
	if(op == '*'||op == '/')
	return 2;
	return 0;
}


int applyOp(int a, int b, char op){
	switch(op){
		case '+': return (a + b)%mod;
		case '-': return (a - b+mod)%mod;
		case '*': return (a * b)%mod;
		case '/': return a*inverse(b,mod);//  return a / b;
	}
}


int evaluate(string tokens){
	int i;
	
	// stack to store integer values.
	stack <int> values;
	
	// stack to store operators.
	stack <char> ops;
	
	for(i = 0; i < tokens.length(); i++){
		
		
		if(tokens[i] == ' ')
			continue;
		
	
		else if(tokens[i] == '('){
			ops.push(tokens[i]);
		}
		
		
		else if(isdigit(tokens[i])){
			int val = 0;
			
			while(i < tokens.length() &&
						isdigit(tokens[i]))
			{
				val = (val*10) + (tokens[i]-'0');
				i++;
			}
			
			values.push(val);
			
			
			i--;
		}
		
		
		else if(tokens[i] == ')')
		{
			while(!ops.empty() && ops.top() != '(')
			{
				int val2 = values.top();
				values.pop();
				
				int val1 = values.top();
				values.pop();
				
				char op = ops.top();
				ops.pop();
				
				values.push(applyOp(val1, val2, op));
			}
			
			
			if(!ops.empty())
			ops.pop();
		}
		
	
		else
		{
			
			while(!ops.empty() && precedence(ops.top())
								>= precedence(tokens[i])){
				int val2 = values.top();
				values.pop();
				
				int val1 = values.top();
				values.pop();
				
				char op = ops.top();
				ops.pop();
				
				values.push(applyOp(val1, val2, op));
			}
			
			
			ops.push(tokens[i]);
		}
	}
	

	while(!ops.empty()){
		int val2 = values.top();
		values.pop();
				
		int val1 = values.top();
		values.pop();
				
		char op = ops.top();
		ops.pop();
				
		values.push(applyOp(val1, val2, op));
	}
	
	
	return values.top();
}

int main() {
       #ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

int t;
cin>>t;
while (t--)
{
    string s;
    cin>>s;
    cout<<evaluate(s)<<endl;
}
	return 0;
}


