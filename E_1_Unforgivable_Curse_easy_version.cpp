#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
bool dfs(string &src, string &tar, vector<vector<int>> &adj, int p, int c)
{
    if (src[c] == tar[p])
    {
        // visited[p]=true;
        char t = src[p];
        src[p] = src[c];
        src[c] = t;
        return true;
    }
    for (auto it : adj[c])
        return dfs(src,tar,adj,p, it);
    // if(visited[it]==false)
    //     if(dfs(p,it)==true)
    //         return true;

    return false;
}

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
        string src, tar;
        cin >> src >> tar;
        string copya = src,copyb=tar;
        sort(copya.begin(),copya.end());
        sort(copyb.begin(),copyb.end());
        if(copya!=copyb){
            cout<<"NO\n";
            continue;
        }
        int f=0;
        for(int i=0;i<n;i++){
            if(max(i,n-i-1)<k && src[i]!=tar[i]){
                f=1;
                break;
            }
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}