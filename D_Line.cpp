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
        string s;
        cin>>s;
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        set<int> pos;
        if(n%2){
            int cr=0;
            for(int i=0;i<n;i++){
                if(i<n/2){
                    if(s[i]=='L'){
                        cr+=i;
                        pos.insert(i);
                    }
                    else{
                        cr+=(n-i-1);
                    }
                }
                else if(i==n/2){
                    cr+=i;
                }
                else{
                    if(s[i]=='L'){
                        cr+=i;
                        
                    }
                    else{
                        cr+=(n-i-1);
                        pos.insert(i);
                    }
                }
            }
            // cout<<"\n";
            // for(auto it: pos)cout<<it<<" ";
            // cout<<"\n";
            for(int i=1;i<=n;i++){
                if(pos.size()==0)cout<<cr<<" ";
                else{
                    int f=*pos.begin(),l=*pos.rbegin();
                    if(f<(n-l-1)){
                        cr=cr-f+(n-f-1);
                        pos.erase(*pos.begin());
                        // cout<<" 1 ";
                    }
                    else{
                        cr=cr+l-(n-l-1);
                        pos.erase(*pos.rbegin());
                        // cout<<" 2 ";
                    }
                    cout<<cr<<" ";
                }

            }
            cout<<"\n";
            
        }
        else{
            int cr=0;
            for(int i=0;i<n;i++){
                if(i<n/2){
                    if(s[i]=='L'){
                        cr+=i;
                        pos.insert(i);
                    }
                    else{
                        cr+=(n-i-1);
                    }
                }
                
                else{
                    if(s[i]=='L'){
                        cr+=i;
                        
                    }
                    else{
                        cr+=(n-i-1);
                        pos.insert(i);
                    }
                }
            }
            for(int i=1;i<=n;i++){
                if(pos.size()==0)cout<<cr<<" ";
                else{
                    int f=*pos.begin(),l=*pos.rbegin();
                    if(f<(n-l-1)){
                        cr=cr-f+(n-f-1);
                        pos.erase(*pos.begin());
                        // cout<<" 1 ";
                    }
                    else{
                        cr=cr+l-(n-l-1);
                        pos.erase(*pos.rbegin());
                        // cout<<" 2 ";
                    }
                    cout<<cr<<" ";
                }
                
            }
            cout<<"\n";
        }
    }
    return 0;
}