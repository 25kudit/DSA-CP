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
        string s;
        cin>>s;
        int n=s.size();
        vector<int> a(n);
        for(int i=0;i<n;i++)a[i]=s[i]-'0';
        int mini=a[n-1];
        map<int,int> unchanged;
        unchanged[a[n-1]]++;
        for(int i=n-2;i>=0;i--){
            if(a[i]<=mini){
                unchanged[a[i]]++;
                mini=a[i];
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(unchanged[a[i]]>0)unchanged[a[i]]--;
            else{
                if(a[i]!=9)a[i]+=1;
            }
        }
        for(auto it:a)cout<<it;
        cout<<"\n";

    }
    return 0;
}