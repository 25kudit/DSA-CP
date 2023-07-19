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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int f=0;
        vector<int> pos;
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                f=1;
                pos.push_back(i+1);
            }
        }
        if(f==0){
            cout<<0<<"\n";
            continue;
        }
        if(pos.size()==1){
            cout<<1<<"\n";
            if(pos[0]==n)cout<<n-1<<"\n";
            else cout<<n<<"\n";
        }
        else{
            int fs=0;
            for(int i=0;i<n;i++){
                int fl=0;
                for(int j=i+1;j<=n;j+=(i+1)){
                    if(s[j-1]!=c){
                        fl=1;
                        break;
                    }
                }
                if(fl==0){
                    cout<<1<<"\n";
                    cout<<i+1<<"\n";
                    fs=1;
                    break;
                }
            }
            if(fs==0){
                cout<<2<<"\n";
                cout<<n-1<<" "<<n<<"\n";
            }
        }

    }
    return 0;
}