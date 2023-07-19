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
        int n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        vector<int> left(c+1),right(c+1),diff(c+1);
        left[0]=0;
        right[0]=n;
        for(int i=1;i<=c;i++){
            int l,r;
            cin>>l>>r;
            l--;r--;
            left[i]=right[i-1];
            right[i]=left[i]+r-l+1;
            diff[i]=left[i]-l;
        }
        // cout<<"h\n";
        // continue;
        for(int i=0;i<q;i++){
            int k;
            cin>>k;
            k--;
            for(int i=c;i>=1;i--){
                if(k<left[i])continue;
                else k-=diff[i];
            }
            cout<<s[k]<<"\n";
        }
    }
    return 0;
}