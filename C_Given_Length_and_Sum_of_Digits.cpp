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
    // cin >> T;
    while (T--)
    {
        int m,s;
        cin>>m>>s;
        if(m==1 && s<=9){
            cout<<s<<" "<<s<<"\n";
            continue;
        }
        if(s<1 || s>m*9){
            cout<<-1<<" "<<-1<<"\n";
            continue; 
        }
        string mn;
        for(int i=0;i<m;i++)mn+='0';
        mn[0]='1';
        int smn=s,i=m-1;
        smn--;
        while(smn>0){
            if(smn>=9){
                mn[i]='9';
                smn-=9;
            }
            else{
                mn[i]+=smn;
                smn=0;
            }
            i--;
        }
        string mx;
        for(int i=0;i<m;i++)mx+='0';

        i=0;
        while(s>0){
            if(s>=9){
                mx[i]='9';
                s-=9;
            }
            else{
                mx[i]=s+'0';
                s=0;
            }
            i++;
        }
        cout<<mn<<" "<<mx<<"\n";
    }
    return 0;
}