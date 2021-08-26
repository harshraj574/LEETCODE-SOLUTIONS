#include<bits/stdc++.h>
using namespace std;
#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)		substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x) 		cerr<<#x<<": "<<x<<" "<<endl;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	vi arr;
	int sum = 0;
	for (int i = 0; i < 50; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum << endl;
}

main(int argc, char **argv)
{

	FIO;
#ifndef ONLINE_JUDGE
	//for getting input from stdin
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	w(x) {
		solve();
	}
	return 0;
}