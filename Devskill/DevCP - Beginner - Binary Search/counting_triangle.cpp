/**

LightOj 1307 - Counting Triangles Solution
 

আমরা প্রথমেই stick গুলোকে সর্ট করে নেই । 
এখন, প্রতিটা stick নিয়ে দেখব এর সাথে আর কোন দুইটি stick নিলে সেটা valid ত্রিভুজ হবে ।
২য় stick এর জন্যও কিন্তু আমরা লুপ চালিয়ে প্রতিটাই একবার করে নিয়ে দেখতে পারি, কারণ দুইটা নেস্টেড লুপ চালালেও TLE খাবে না, কারণ N≤2000 ।
তাহলে, এখন দেখতে হবে এই দুইটা stick এর সাথে কত উপায়ে ৩য় stick নির্বাচন করা যায়।

শর্ত মতে, ১ম বাহু + ২য় বাহু > ৩য় বাহু হতে হবে ।
অতএব, আমাদের দেখতে হবে  - ১ম বাহু ও ২য় বাহুর যোগফল অপেক্ষা ছোট, এমন কতগুলো stick আছে । 

যেহেতু stick গুলো সর্টেড আছে, তাই আমরা বাইনারি সার্চ করেই এটা বের করতে পারি । যেহেতু একই ভ্যালু রিপিট হতে পারে, অতএব আমাদেরকে upper bound বের করতে হবে । এতে করে আমাদের আরেকটা লুপ চালাতে হবে না । বাইনারি সার্চের কমপ্লেক্সিটি O(log(n)), অতএব আমাদের টোটাল কমপ্লেক্সিটি হচ্ছে O(N2log(n))

upper_bound ওই ইন্ডেক্স এর pointer return করে যেই ইন্ডেক্স এর মান সার্চ করা মানের চেয়ে বড় । তার মানে ওই index এর আগে পর্যন্ত যে কোন মান সার্চ করা value এর চেয়ে ছোট বা সমান ।

তাহলে upper_bound দিয়ে আমাদেরকে সার্চ করতে হবে (১ম বাহু + ২য় বাহু - ১) । ২য় লুপ যদি j দিয়ে চালানো হয়, তবে এই (index - j) সংখ্যক stick কে ১ম ও ২য় বাহুর সাথে ৩য় বাহু হিসেবে ব্যবহার করা যাবে ।
**/


#include <bits/stdc++.h>
#define ll long long
#define s scanf
using namespace std;
vector<int>v;
int main()
{
	int tc;
	s("%d",&tc);
	for(int tcc=1;tcc<=tc;tcc++)
	{

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		s("%d",&x);
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	//for (int x : v)cout << x << " ";
	//cout << endl;
	int c = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n - 1; j++)

		{
			int two_triangle_sum = v[i] + v[j] - 1;
			// 2 bahor jogfol thake 3rd bahor length 1 kom hole e hobe, tai 1 minas kora hoise
			int up = upper_bound(v.begin(), v.end(), two_triangle_sum) - v.begin();
			//cout<<"up "<<up<<endl;
			// j thake upper bound porjonto jotogola index ache totho gole valid triangle hobe
			// tai upper bound thake j minas korte hobe
			up -= (j+1);// index start from 0 , tai j+1 minas kora hoise.j=1 mane 1 ta value bad for up-=j.
			// actually akane 2 ta index bad hoyar kotha . tai zero index ke add korar jnno 1 plus kora hoise ja sthathe
			c += up;

			//cout<<v[i]<<"  "<<v[j]<<"   "<<v[i]+v[j]<<"  "<<c<<endl;
			//c=0;
		}

	}
	printf("Case %d: ",tcc );
	printf("%d\n",c );
	v.clear();

}

	return 0;
}