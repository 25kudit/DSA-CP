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
vector<int> fact;
int maxi = 1e12+10;
void factc(){
    int i=3,f=2;
    while(f<maxi){
        fact.push_back(f);
        // i++;
        f*=i;
        i++;
    }
}
set<pair<int,int>> sums;
void calcsum(int i,int cur,int cnt=0 ){
    if(i == fact.size()){
        sums.insert({cur,cnt});
        return;
    }
    calcsum(i+1,cur,cnt);
    cur+=fact[i];
    calcsum(i+1,cur,cnt+1);
    cur-=fact[i];
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    factc();
    calcsum(0,0);
    while (T--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<60;i++){
            if(n & (1LL<<i)) ans++;
        }
        for(auto it : sums){
            int fsum=it.first;
            int tsum= n-fsum;
            int cnt=it.second;
            if(fsum > n)break;
            for(int i=0;i<60;i++){
                if(tsum & (1LL<<i))cnt++;
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<"\n";

    }
    return 0;
}