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
    // cin >> T;
    while (T--)
    {
        
        string s,ans="";
        cin>>s;
        int n=s.size(),f=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                for(int k=j-1;k>=0;k--){
                    // cout<<"H1\n";
                    string t = "";
                    t+=s[k];
                    t+=s[j];
                    t+=s[i];
                    if((stoi(t))%8 == 0){
                        // cout<<t<<"\n";
                        f=1;
                        for(int x=0;x<=k;x++)ans+=s[x];
                        ans+= s[j];
                        ans+= s[i];
                        // cout<<"h1\n";
                        break;
                    }
                    t="";
                    t+=s[j];
                    t+=s[i];
                    if((stoi(t))%8==0){
                        f=1;
                        ans+= t;
                        break;
                    }
                }
                if(f)break;
                if(j==0){
                    // cout<<"h1\n";
                    string t = "";
                    t+=s[j];
                    t+=s[i];
                    if((stoi(t))%8==0){
                        f=1;
                        ans+= t;
                        break;
                    }
                }
            }
            if(f)break;
            // if(i==0)
            {
                // cout<<"h1\n";
                    string t = "";
                    t+=s[i];
                    // cout<<t<<"\n";
                    if((stoi(t))%8==0){
                        f=1;
                        ans+= t;
                        break;
                    }
                }
        }
        if(!f){
            cout<<"NO\n";
            continue;
        }
        string res="";
        int i=0,an = ans.size();
        while(i<an && ans[i]=='0')i++;
        while(i<an){
            res+=ans[i];
            i++;
        }
        cout<<"YES\n";
        if(res.size()>0)cout<<res<<"\n";
        else cout<<"0\n";
    }
    return 0;
}