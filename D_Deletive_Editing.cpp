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
        string s, t;
        cin >> s >> t;
        vector<int> freq(26,0);
        for(int i=0;i<t.size();i++){
            freq[t[i]-'A']++;
        }
        int k=t.size()-1;
        for(int i=s.size()-1;i>=0;i--){
            if(freq[s[i]-'A']!=0){
                if(s[i]==t[k]){
                    k--;
                }
                freq[s[i]-'A']--;
            }
        }
        if (k >=0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}