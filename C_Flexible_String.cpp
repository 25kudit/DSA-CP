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

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

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
        string a,b;
        cin>>a>>b;
        set<char> st;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])
                st.insert(a[i]);
        }
        if(st.size()<=k){
            cout<<n*(n+1)/2<<"\n";
            continue;
        }
        map<char,int> chmp;
        int it = 0 ;
        for(auto c : st){
            chmp[c] =it;
            it++;
        }
        int sz= st.size(),ans = INT_MIN;
        for(int it = 0 ;it < binpow(2,sz);it++){
            int cnt = 0 ;
            for(int i=0;i<31;i++)
                if(it & (1<<i))cnt++;
            if(cnt>k)continue;
            string temp = a;
            for(int i=0;i<n;i++){
                if(temp[i] == b[i])continue;
                if(it & (1<<chmp[temp[i]]))temp[i]=b[i];
            }
            int curr =0,st=0,en=0;
            while(st<n){
                if(temp[st]!=b[st]){
                    st++;
                    continue;
                }
                en=st;
                while(en<n && temp[en]==b[en])en++;
                curr+=(en-st)*(en-st+1)/2;
                st=en;
            }
            ans = max(ans, curr);

        }
        cout<<ans<<"\n";
    }

    return 0;
}