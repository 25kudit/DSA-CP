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

int count0(int n){
    int cnt=0;
    while(n%10 == 0){
        cnt++;
        n/=10;
    }
    return cnt;
}

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
        int n2,n5,t=a;
        n2=n5=0;
        while(t%2==0){
            n2++;
            t/=2;
        }
        t=a;
        while(t%5==0){
            t/=5;
            n5++;
        }
        int temp = min(n2,n5);
        n2-=temp;
        n5-=temp;
        int ans=1;
        while(n5 && ans*2<=b){
            n5--;
            ans*=2;
        }
        while(n2 && ans*5<=b){
            n2--;
            ans*=5;
        }
        
        while(ans*10<=b)ans*=10;
        int x= b/ans;
        ans*=x;
        cout<<a*ans<<"\n";
        
    }
    return 0;
}