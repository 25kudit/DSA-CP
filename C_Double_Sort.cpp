#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type,less<int> ,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

bool cmp(pair<ll,ll> &a,pair<ll,ll> &b ){
    if(a.first== b.first)return a.second<b.second;
    return a.first<b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<pair<ll,ll>> s(n);
        for(int i=0;i<n;i++){
            s[i]={a[i],b[i]};
        }
        sort(s.begin(),s.end(),cmp);
        int f=0;
        for(int i=0;i<n-1;i++){
            if(s[i].second>s[i+1].second){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<-1<<"\n";
            continue;
        }
        ll cnt=0;
        vector<pair<ll,ll>> swaps;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    cnt++;
                    swaps.push_back({j,j+1});
                    ll t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    t=b[j];
                    b[j]=b[j+1];
                    b[j+1]=t;
                    // cout<<"h1\n";
                }
                else if(a[j]==a[j+1] && b[j]>b[j+1]){
                    cnt++;
                    swaps.push_back({j,j+1});
                    ll t;
                    t=b[j];
                    b[j]=b[j+1];
                    b[j+1]=t;
                    // cout<<"h2\n";
                    
                }

            }
        }
        cout<<cnt<<"\n";
        for(auto it:swaps){
            cout<<it.first+1<<" "<<it.second+1<<"\n";
        }

    }

    return 0;
}