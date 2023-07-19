#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> lw(26,0),up(26,0);
        for(int i=0;i<n;i++){
            if(s[i]>='a'&& s[i]<='z')lw[s[i]-'a']++;
            else up[s[i]-'A']++;
        }
        int ans =0;
        for(int i=0;i<26;i++){
            if(lw[i]<up[i]){
                ans+=lw[i];
                up[i]-=lw[i];
                lw[i]=0;
            }
            else{
                ans+=up[i];
                lw[i]-=up[i];
                up[i]=0;
            }
        }
        int i=0;
        while(i<26  && k>0){
            if(up[i]>1){
                int t= min(k,up[i]/2);
                ans+=t;
                k-=t;
            }
            else if(lw[i]>1){
                int t = min(k,lw[i]/2);
                ans+=t;
                k-=t;
            }
            i++;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}