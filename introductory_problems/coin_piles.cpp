#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <climits>
#include <vector>
#include <math.h>
#include <deque>
#include <set>
#include <map>
/*
-%- INCLUDING LIBRARY SINCE I USE MAC AND IM TOO LAZY TO INCLUDE A BITS/STDC.H -%-
*/
 
#define ll long long
#define endl "\n";
#define fi first
#define se second
#define PB push_back
using namespace std;
/*
-%- DEFINING MACRO -%-
*/
 
void setIO(string name = "") {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
 
void solve(){
	int t;
	cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		ll total = a+b;
		bool check;
		ll temp = min(a, b);
		a = max(a, b);
		b = temp;
		check = (total %3 ==0) && (b*2>=a);
		if(check){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
 
	}
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
 
