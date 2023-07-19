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
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            b[i]=i+1;
        }
        if(n==1){
            cout<<-1<<"\n";
            continue;
        }
        for(int i=0;i<n;){
            if(a[i]==b[i]){
                if(i==(n-1)){
                    swap(b[i],b[i-1]);
                }
                else{
                    swap(b[i],b[i+1]);
                }
                i+=2;
            }
            else{
                i++;
            }
        }
        for(auto it:b){
            cout<<it<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}