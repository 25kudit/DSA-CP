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
        cin >> n;
        vector<string> a(n);
        multiset<string> ms;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int f = 0;
        for(int i=0;i<n;i++){
            string t=a[i];
            reverse(t.begin(),t.end());
            if(a[i]==t){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"YES\n";
            continue;
        }
        for(int i=0;i<n;i++){
            string t=a[i];
            reverse(t.begin(),t.end());
            if(ms.find(t)!=ms.end()){
                f=1;
                break;
            }
            if(a[i].size()==2){
                for(int i=0;i<26;i++){
                    t+=('a'+i);
                    if(ms.find(t)!=ms.end()){
                        f=1;
                        break;
                    }
                    t.pop_back();
                }
                if(f)break;
            }
            if(a[i].size()==3){
                string tmp ="";
                tmp+=a[i][2];
                tmp+=a[i][1];
                if(ms.find(tmp)!=ms.end()){
                    f=1;
                    break;
                }
            }
            ms.insert(a[i]);
        }
        
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}