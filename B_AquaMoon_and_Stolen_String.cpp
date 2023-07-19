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


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(m,vector<int> (26,0));
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<m;j++){
                a[j][s[j]-'a']++;
            }
        }
        for(int i=0;i<n-1;i++){
            string s;
            cin>>s;
            for(int j=0;j<m;j++){
                a[j][s[j]-'a']--;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<26;j++){
                if(a[i][j]==1){
                    cout<<(char)(j+'a');
                    break;
                }
            }
        }
        cout<<"\n";


    }
    return 0;
}