#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    string str;
    cin>>str;
    char pre=str[0];
    map<char,int>mp;
    map<char,int>ma;
    mp[str[0]]++;
    for(int i = 1 ; i < str.size() ; i++){
        if(pre!=str[i]){
            ma[str[i]]=max(ma[str[i]],mp[str[i]]);
            mp[str[i]]=0;
            mp[str[i]]++;
        }
        else{
            mp[str[i]]++;
        }
        pre=str[i];
    }
    map<char,int>::iterator mama
        = max_element(ma.begin(),ma.end(),[] (const std::pair<char,int>& a, const std::pair<char,int>& b)->bool{ return a.second < b.second; } );
    map<char,int>::iterator mamp
        = max_element(mp.begin(),mp.end(),[] (const std::pair<char,int>& a, const std::pair<char,int>& b)->bool{ return a.second < b.second; } );
    cout<<max(mama->second,mamp->second);
}
 
