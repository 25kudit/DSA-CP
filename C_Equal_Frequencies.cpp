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
    return (a.first >b.first);
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
        string s;
        cin>>s;
        vector<pair<int,int>> vp(26);
        for(int i=0;i<26;i++)
            vp[i]={0,i};
        for(int i=0;i<n;i++)
            vp[s[i]-'a'].first++;
        sort(vp.begin(),vp.end(),cmp);
        int ans=INT_MAX,mni=-1;
        for(int i=1;i<=26;i++){
            if(n%i == 0){
                int temp=n/i,cans=0;
                for(int j=0;j<i;j++)
                    if(vp[j].first>temp)
                        cans+=(vp[j].first - temp);
                for(int j=i;j<26;j++)
                    cans+=vp[j].first;
                if(cans<ans){
                    ans=cans;
                    mni = i;
                }
            }
        }
        // cout<<ans<<"&\n";
        // continue;
        int each = n/mni;
        vector<int> aux(26);
        for(int i=0;i<mni;i++)
            aux[vp[i].second]=vp[i].first-each;
        for(int i=mni;i<26;i++)
            aux[vp[i].second]=vp[i].first;

        for(int i=0;i<n;i++){
            if(aux[s[i]-'a']>0){
                int j=0;
                while(aux[j]>=0)j++;
                aux[j]++;
                aux[s[i]-'a']--;
                s[i]=(char)'a'+j;
            }
        }
        cout<<ans<<"\n"<<s<<"\n";
        
        
        

    }
    return 0;
}