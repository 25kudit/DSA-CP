#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        multiset<int> eve;
        multiset<int,greater<int>> odd;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(t%2) odd.insert(t);
            else eve.insert(t);
        }
        int mineve = *eve.begin();
        eve.erase(eve.begin());
        int maxodd = *odd.begin();
        odd.erase(odd.begin());
        int nup=0,ndown=0;
        for(auto it:eve){
            nup+=(it-mineve);
        }
        for(auto it:odd){
            ndown+=(maxodd-it);
        }
        if(nup==ndown)cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}