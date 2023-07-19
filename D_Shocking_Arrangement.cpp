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
        int n;
        cin>>n;
        vector<int> a(n);
        multiset<int> pos,neg;
        int mx,mn;
        mx=INT_MIN;
        mn=INT_MAX;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]>=0)pos.insert(a[i]);
            else neg.insert(-1*a[i]);
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        int diff = mx-mn;
        vector<int> res;
        int cr=0,f=0;
        while(res.size()<n){
            int temp_p=*pos.begin(),temp_n=*neg.begin();
            if(cr+temp_p<diff){
                res.push_back(temp_p);
                pos.erase(pos.find(temp_p));
                cr+=temp_p;
            }
            else{
                if(neg.size()==0){
                    f=1;
                    break;
                }
                res.push_back(-1*temp_n);
                neg.erase(neg.find(temp_n));
                cr-=temp_n;
            }
        }
        if(f)cout<<"No\n";
        else{
            cout<<"Yes\n";
            for(int i=0;i<n;i++)cout<<res[i]<<" ";
            cout<<"\n";
        }



    }
    return 0;
}