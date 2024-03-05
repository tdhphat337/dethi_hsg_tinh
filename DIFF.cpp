#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    freopen("DIFF.INP","r",stdin);
    freopen("DIFF.OUT","w",stdout);
    ll sum=0,sum1=0,sum2=0,l,r,res=INT_MAX,res1;cin>>l>>r;
    for(ll i=l;i<=r;i++)sum+=i;
    for(ll i=l;i<=r;i++){
        sum1+=i;sum2=sum-sum1;
        if(res>abs(sum1-sum2)){
            res=abs(sum1-sum2);
            res1=i;
        }
    }
    cout<<res1;
    return 0;
}
