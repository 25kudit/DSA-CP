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
        int n,x;
        cin>>n>>x;
        char s[n+1]={};
        for(int i=0;i<n;i++)s[i]='a';
        x--;
        if(x==0){
            cout<<s<<"\n";
            continue;
        }
        if(n%2){
            if(x>=(n/2+1)){
                cout<<-1<<"\n";
                continue;
            }
            char c='z';
            s[n/2]=c;
            c--;
            x--;
            int it=1;
            while(x){
                s[n/2-it] = s[n/2+it]=c;
                c--;
                x--;
                it++;
            }
        }
        else{
            if(x>=n/2){
                cout<<-1<<"\n";
                continue;
            }
            char c='z';
            int it=1;
            while(x){
                s[n/2-it]=s[n/2+it-1]=c;
                c--;
                x--;
                it++;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}