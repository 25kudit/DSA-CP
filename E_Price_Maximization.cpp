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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i] / k;
            a[i] = a[i] % k;
        }
        vector<int> aux;
        for(int i=0;i<n;i++){
            if(a[i]!=0) aux.push_back(a[i]);
        }
        sort(aux.begin(),aux.end());
        if(aux.size()==0){
            cout<<ans<<"\n";
            continue;
        }
        int st=0,en=aux.size()-1;
        while(st<en){
            if(aux[st]+aux[en]>=k){
                ans++;
                st++;
                en--;
            }
            else{
                st++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}