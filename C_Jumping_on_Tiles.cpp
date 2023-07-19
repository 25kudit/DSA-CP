#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int binpow(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans + m) % m;
}

bool cmp(pair<char,int> &a,pair<char,int> &b){
    if(a.first==b.first)return a.second>b.second;
    return a.first < b.first;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n=s.size();
        vector<pair<char,int>> ms;
        for(int i=0;i<n;i++){
            ms.push_back({s[i],i+1});
        }
        int cost= abs(s[0]-s[n-1]);
        if(s[0]<=s[n-1]){
            sort(ms.begin(),ms.end());
            int cnt=0,f=0;
            vector<int> ans;
            for(int i=0;i<n;i++){
                if((ms[i].first==s[0] && ms[i].second == 1) || f==1){
                    cnt++;
                    f=1;
                    ans.push_back(ms[i].second);
                }
                if(ms[i].first==s[n-1] && ms[i].second==n)break;
            }
            
            cout<<cost<<" "<<cnt<<"\n";
            for(auto it: ans)cout<<it<<" ";
            cout<<"\n";
        }
        else{
            sort(ms.begin(),ms.end(),cmp);
            int cnt=0,f=0;
            vector<int> ans;
            for(int i=0;i<n;i++){
                if((ms[i].first==s[n-1] && ms[i].second==n)|| f==1){
                    cnt++;
                    f=1;
                    ans.push_back(ms[i].second);
                }
                if(ms[i].first==s[0] && ms[i].second==1)break;
            }
            
            cout<<cost<<" "<<cnt<<"\n";
            for(int i= ans.size()-1;i>=0;i--)cout<<ans[i]<<" ";
            cout<<"\n";

        }
        
        
    }

    return 0;
}