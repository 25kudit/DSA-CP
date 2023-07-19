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
#define mod 1000000007
int inb(int x,int ab,int db,int nb){
    if(x>=ab){
    if(abs(x-ab)%db==0){
        if(abs(x-ab)/db<nb){
            return 1;
        }
    }
    }
    return 0;
}
vector<int> finddiv(int x){
    vector<int> ans;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            if(x/i==i)ans.push_back(i);
            else{
                ans.push_back(i);
                ans.push_back(x/i);
            }
        }
    }
    return ans;

}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int ab,db,nb,ac,dc,nc;
        cin>>ab>>db>>nb>>ac>>dc>>nc;
        if(inb(ac+(nc-1)*dc,ab,db,nb)==0 || inb(ac,ab,db,nb)==0 || dc%db!=0){
            cout<<0<<"\n";
            continue;
        }
        if(inb(ac+nc*dc,ab,db,nb)==0 || inb(ac-dc,ab,db,nb)==0){
            cout<<-1<<"\n";
            continue;
        }
        // cout<<"abhi kr raha\n";
        vector<int> divisors = finddiv(dc);
        int ans=0;
        
        for(auto da:divisors){
            if((da*db)/__gcd(da,db)<dc)continue;
            else{
                ans=ans+(((dc-1)/da +1) * ((dc-1)/da +1))%mod;
                ans%=mod;

            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}