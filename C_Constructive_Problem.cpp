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
        int n ; 
        cin>>n;
        vector<int> a(n);
        
        set<int> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        cout<<a.back();
        int mex = n,k=0;
        for(auto it :st){
            if(k!=it){
                // mex = k;
                break;
            }
            k++;
        }
        mex = k;
        if(mex == n){
            cout<<"No\n";
            continue;
        }
        int fs=-1,ls=-1;
        for(int i=0;i<n;i++){
            if(a[i]==mex+1){
                ls=i;
                if(fs==-1)fs=i;
            }
        }
        // cout<<mex;
        vector<int> ind(mex,-1);
        for(int i=0;i<n;i++){
            if(a[i]<mex){
                if(i<fs || i>ls)ind[a[i]]=i;
            }
        }
        int f =0;
        for(int i=0;i<mex;i++){
            if(ind[i]==-1){
                f=1;
                break;
            }
        }
        if(f)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}