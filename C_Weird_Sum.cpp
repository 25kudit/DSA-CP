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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    map<int, vector<int>> mx,my;
    set<int> cl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int t;
            cin >> t;
            mx[t].push_back(i);
            my[t].push_back(j);
            cl.insert(t);
        }
    }
    // for(auto it: cl)cout<<it<<" ";
    int ans = 0;
    // return 0;
    for (auto it : cl)
    {
        int a1=0,a2=0;
        sort(mx[it].begin(),mx[it].end());
        for(int i=0;i<mx[it].size();i++)a1+=i*mx[it][i];
        for(int i=0;i<mx[it].size();i++)a2+=(mx[it].size()-1-i)*mx[it][i];
        // cout<<a1<<" &"<<a2<<"\n";
        ans+=(a1-a2);
        a1=a2=0;

        sort(my[it].begin(),my[it].end());
        for(int i=0;i<my[it].size();i++)a1+=i*my[it][i];
        for(int i=0;i<my[it].size();i++)a2+=(my[it].size()-1-i)*my[it][i];
        ans+=(a1-a2);
    }
    cout << ans << "\n";

    return 0;
}