//https://cses.fi/problemset/task/1634/

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int coinChange(vector<int>& coins, int amount) {
    sort(coins.begin(),coins.end());
    if(amount==0)return 0;
    int dp[amount+1];
    memset(dp,mod,sizeof(dp));
    int n = coins.size();
    dp[0]=0;
    for(int i = 1 ; i < amount+1 ; i++){
        for(int j = 0 ; j < n ; j++){
            int t = i-coins[j];
            if(t >= 0){
                dp[i] = min(dp[i], dp[t] + 1);
            }
        }   
    }
    if(dp[amount]>amount)return -1;
    return dp[amount];
}

int main(){
	int n,k;
	cin>>n>>k;
	vector<int>v;
	for(int i =0 ; i < n ; i++){
		int x;
		cin>>x;
		v.emplace_back(x);
	}
	cout<<coinChange(v,k);
}
