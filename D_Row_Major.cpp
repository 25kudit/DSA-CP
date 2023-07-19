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

vector<int> primes={2,3,5,7,11,13,17,19,23};


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
        set<int> fact;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                fact.insert(i);
                fact.insert(n/i);
            }
        }
        int ind=-1;
        for(int i=1;i<=n;i++){
            if(fact.find(i)==fact.end()){
                ind = i;
                break;
            }
        }
        if (ind ==-1)ind =n+1;
        vector<char> ch;
        for(char i='a';i<='z';i++)ch.push_back(i);
        string ans="";
        int it=0;
        while(it<n){
            ans+=ch[it%ind];
            it++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}