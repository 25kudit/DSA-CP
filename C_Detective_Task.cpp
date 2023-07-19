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
        string s;
        cin >> s;
        ll n1 = 0, n0 = 0, nq = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                n1++;
            else if (s[i] == '0')
                n0++;
            else
                nq++;
        }
        ll ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(n1==1){
                    ans++;
                }
                n1--;
            }
            else if(s[i]=='0'){
                if(n1==0){
                    ans++;
                    n0--;
                }
                break;
            }
            else{
                if(n1==0){
                    ans++;
                    nq--;
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}