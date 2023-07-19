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

int ceildiv(int a,int b){
    if(a%b==0)return a/b;
    return a/b+1;
}

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
        int f1=1,same=0,mni=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)f1=0;
            if(mn>a[i]){
                mn=a[i];
                mni=i;
            }
        }
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1])same=1;
        }
        if(same == 0){
            cout<<0 <<"\n";
            continue;
        }
        if(f1==0){
            cout<<-1<<"\n";
            continue;
        }
        int f = 1;
        vector<pair<int,int>> ans;
        int nxtmni=0,nxtmn=INT_MAX;
        while(f){
            f=0;
            for(int i =0 ;i<n;i++){
                if(a[i]!=a[mni]){
                    a[i]=ceildiv(a[i],a[mni]);
                    ans.push_back({i+1,mni+1});
                    f=1;
                }
                if(nxtmn > a[i]){
                    nxtmn=a[i];
                    nxtmni = i;
                }
            }
            mni = nxtmni;
        }
        cout<<ans.size()<<"\n";
        for(auto it :ans)cout<<it.first<<" "<<it.second<<"\n";



    }
    return 0;
}