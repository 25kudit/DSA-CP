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
const int N = 1e7+10;
int isprime[N+10];
vector<int> primes;

void sieve(){
    // for(int i=2;i<=N;i++)isprime[i]=0;
    for(int i=2;i<=N;i++){
        if(isprime[i]==0){
            isprime[i]=i;
            for(int j= i*i;j<=N;j+=i)
                isprime[j]=i;
        }
    }

}




signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    sieve();
    cin >> T;
    while (T--)
    {
        int a,b;
        cin>>a>>b;
        
        if(a+1==b){
            cout<<-1<<"\n";
            continue;
        }
        int len=INT_MAX;
        int d= b-a;

        while(d>1){
            int p = isprime[d];
            int fb=(b+p-1)/p;
            fb*=p;
            len = min(len , fb-b);
            d/=p;
        }
         cout<<len<<"\n";

    }
    return 0;
}