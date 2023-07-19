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

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int m;
        cin >> m;
        vector<string> wall(2);
        cin>>wall[0];
        cin>>wall[1];
        // for(auto it:wall){
        //     for(auto i : it)cout<<i<<" ";
        //     cout<<"\n";
        // }
        // continue;
        if (m == 1)
        {
            cout << "YES\n";
            continue;
        }
        // vector<vector<bool>> visited(2, vector<bool>(m, false));
        pair<int, int> lastvisited;
        lastvisited = {-1, -1};
        int f=0,lvwb=-1,lvbw=-1;
        for(int i=0;i<m;i++){
            // cout<<lvbw<<" ";
            // if(wall[0][i] == wall[1][i])continue;
            if(wall[0][i]=='B' && wall[1][i]=='W'){
                
                if(lvwb > lvbw){
                    if((i-lvwb)%2 == 1){
                        f=1;
                        break;
                    }
                }
                else if(lvwb<lvbw){
                    if((i-lvbw)%2 == 0){
                        f=1;
                        break;
                    }

                }
                lvbw=i;
            }
            else if(wall[1][i]=='B' && wall[0][i]=='W'){
                
                if(lvwb > lvbw){
                    if((i-lvwb)%2 == 0){
                        f=1;
                        break;
                    }
                    lvwb=i;
                }
                else if(lvwb<lvbw) {
                    if((i-lvbw)%2 == 1){
                        f=1;
                        break;
                    }
                    lvwb=i;
                }
                lvwb=i; 
            }
            // cout<<lvwb<<" ";
        }
        
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}