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
	ll n;
	cin>>n;
	if((n*(n+1)%4)!=0){
		cout<<"NO";
	}
	else{
		cout<<"YES\n";
		ll temp = (n*(n+1))/4;
		vector<ll> a;
		vector<ll> b;
		for(ll i = n; i>= 1; --i){
			if(temp >= i){
				a.PB(i);
				temp -= i;
			}
			else{
				b.PB(i);
			}
		}
		cout<<a.size()<<endl;
		for(size_t i = 0; i< a.size(); ++i){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		cout<<b.size()<<endl;
		for(size_t i = 0; i< b.size(); ++i){
			cout<<b[i]<<" ";
		}
	}
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

