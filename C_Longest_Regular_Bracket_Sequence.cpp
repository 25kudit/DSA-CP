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
    string s;
    cin >> s;
    int n = s.size();
    stack<char> par;
    ll ans = 0, cnt = 0, fr = 1;
    for (int i = 0; i < n; i++)
    {
        // ll cur = 0;
        if (s[i] == '(')
        {
            // cout<<i<<"&\n";
            cnt++;
            par.push('(');
        }
        if (s[i] == ')')
        {
            
            if (!par.empty())
            {
                cnt++;
                par.pop();
                // cout<<i<<"%\n";
                if (par.empty())
                {
                    if (ans == cnt){
                        // cout<<"hi";
                        fr++;
                        ans = max(ans, cnt);
                    }
                    else if(ans<cnt){
                        // cout<<i<<"!\n";
                        fr=1;
                        ans = cnt;
                        
                    }
                    cnt=0;
                    
                }
            }
            else{
                cnt=0;
                continue;
            }
        }
    }
    cout<<ans<<" "<<fr;

    return 0;
}