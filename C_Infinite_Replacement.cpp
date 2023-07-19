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
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin>>s;
        string t;
        cin>>t;
        if(t.length()==1){
            if(t[0]=='a') cout<<1<<"\n";
            else cout<<(ll)(pow(2,s.length()))<<"\n";
            continue;
        }
        int f=0;
        for(int i=0;i<t.length();i++){
            if(t[i]=='a'){
                f=1;
                break;
            }
        }
        if(f==1) cout<<-1<<"\n";
        else cout<<(ll)(pow(2,s.length()))<<"\n";

    }

    return 0;
}