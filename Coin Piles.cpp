#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	while(n--){
		ll a,b;
		cin>>a>>b;
		if(a>b){
			if((a+b)%3==0 and 2*b>=a)cout<<"YES\n";
			else cout<<"NO\n";
		}
		else{
			if((a+b)%3==0 and 2*a>=b)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}
