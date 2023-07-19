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

bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.first>b.first;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,s1,s2;
        cin>>n>>s1>>s2;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            v[i]={t,i+1};
        }
        sort(v.begin(),v.end(),cmp);
        vector<int> a,b;
        int it1=1,it2=1,sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            if(it1*s1<it2*s2){
                a.push_back(v[i].second);
                sum1+=it1*s1;
                it1++;
            }
            else{
                b.push_back(v[i].second);
                sum2+=it2*s2;
                it2++;
            }
        }
        

        cout<<a.size()<<" ";
        for(auto it: a)cout<<it<<" ";
        cout<<"\n";
        cout<<b.size()<<" ";
        for(auto it:b)cout<<it<<" ";
        cout<<"\n";

    }
    return 0;
}