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

vector<int> primes;

void calc()
{
    int n = 2e5+9;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (is_prime[i] == true)
            primes.push_back(i);
    }
    // cout << cnt;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    calc();
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n,-1);
        int i=0,it=0;
        unordered_set<int> avl;
        for(int i=1;i<=n;i++)avl.insert(i);
        while(i<n/2){
            if(primes[it]>n)break;
            a[i]=primes[it];
            avl.erase(primes[it]);
            it++;
            if(primes[it]>n)break;
            a[n-i-1]=primes[it];
            avl.erase(primes[it]);
            i++;
            it++;
        }
        a[n/2]=1;
        avl.erase(1);
        for(int i=0;i<n;i++){
            if(a[i]==-1){
                a[i]=*avl.begin();
                avl.erase(*avl.begin());
            }
        }
        for(auto it :a)cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}