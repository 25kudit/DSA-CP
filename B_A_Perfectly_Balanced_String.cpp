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
        int l = s.size();
        set<char> ch;
        // vector<int> ch(26, -1);
        int f = 0;
        for (int i = 0; i < l; i++)
        {
            ch.insert(s[i]);
        }
        for(int i=0;i<l-ch.size();i++){
            if(s[i]!=s[(i+ch.size())]){
                f=1;
                break;
            }
        }
        if (f == 0)
            cout << "YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}