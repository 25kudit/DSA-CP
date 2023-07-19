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

void solve(){
    int n;
    cin>>n;
    vector<int> pos,neg,a;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t<0) neg.push_back(t);
        else if(t>0) pos.push_back(t);
        else{
            if(a.size()<2) a.push_back(t);
        }
    }
    if(neg.size()>2 || pos.size()>2){
        cout<<"No\n";
        return;
    }
    for(int i=0;i<pos.size();i++){
        a.push_back(pos[i]);
    }
    for(int i=0;i<neg.size();i++){
        a.push_back(neg[i]);
    }
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            for(int k=j+1;k<a.size();k++){
                int s=a[i]+a[j]+a[k];
                int ok=0;
                for(int x=0;x<a.size();x++){
                    if(a[x]==s){
                        ok=1;
                        break;
                    }
                }
                if(ok==0){
                    cout<<"No\n";
                    return;
                }
            }
        }
    }
    cout<<"Yes\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
        
    }
    return 0;
}