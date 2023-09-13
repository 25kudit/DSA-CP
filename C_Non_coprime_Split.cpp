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
        int a,b;
        cin>>a>>b;
        int f=0;
        for(int i=a;i<=b;i++){
            if(i%2 == 0 && i>2){
                cout<<i-2<<" "<<2<<"\n";
                f=1;
                break;
            }
        }if(f)continue;
        for(int i=a;i<=b;i++){
            for(int j=2;j<=sqrt(i);j++){
                if(i%j ==0){
                    int m=(i/j-1)*j,n=j;
                    if((i/j-1)*j + j == i){
                        f=1;
                        cout<<(i/j-1)*j<<" "<<j<<"\n";
                        break;
                    }
                }
            }
            if(f)break;
        }
        if(f==0)cout<<-1<<"\n";
    }
    return 0;
}