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
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if((n-1)%3==0){
            cout<<"YES\n";
            continue;
        }
        int f=0;
        for(int i=0;i<26;i++){
            int st=n+1,en=-1;
            char temp=i+'a';
            for(int k=0;k<n;k++){
                if(k%3)continue;
                if(s[k]==temp){
                    st=k;
                    break;
                }
            }
            int next = n-1;
            while(next>=0){
                int ind = n-next-1;
                if(s[next]==temp && ind%3==0){
                    en=next;
                    break;
                }
                next--;
            }
            if(st<en){
                f=1;
                break;
            }

        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}