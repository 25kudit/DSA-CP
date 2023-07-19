#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type,less<int> ,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int maxa=INT_MIN;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            maxa=max(maxa,t);
        }
        int m;
        cin>>m;
        int maxb=INT_MIN;
        for(int i=0;i<m;i++){
            int t;
            cin>>t;
            maxb=max(maxb,t);
        }
        if(maxa>maxb){
            cout<<"Alice\nAlice\n";
        }
        else if(maxb>maxa){
            cout<<"Bob\nBob\n";
        }
        else{
            cout<<"Alice\nBob\n";
        }
    }

    return 0;
}