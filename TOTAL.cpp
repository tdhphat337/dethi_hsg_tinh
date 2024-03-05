#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    freopen("TOTAL.INP","r",stdin);
    freopen("TOTAL.OUT","w",stdout);
    string s;cin>>s;
    ll sum=0;vector<ll>a;
    for(char c:s){
        if(isdigit(c))a.push_back(c-'0');
    }for(ll x:a)sum+=x;
    cout<<sum;
    return 0;
}
