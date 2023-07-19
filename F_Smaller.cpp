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

int binpow(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans + m) % m;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        vector<int> a(26, 0), b(26, 0);
        a[0] = 1;
        b[0] = 1;
        int d, k, alen = 1, blen = 1;
        int q;
        cin >> q;
        while (q--)
        {
            int d, k;
            string x;
            cin >> d >> k >> x;
            if (d == 1)
            {
                for (int i = 0; i < x.size(); i++)
                {
                    a[x[i] - 'a'] += k;
                }
                alen += k * x.size();
            }
            else
            {
                for (int i = 0; i < x.size(); i++)
                {
                    b[x[i] - 'a'] += k;
                }
                blen += k * x.size();
            }
            int tempa = 0, tempb = 0;
            int f=0;
            for(int i=0;i<26;i++){
                if(a[i]>0){
                    for(int j=i+1;j<26;j++){
                        if(b[j]>0){
                            f=1;
                            break;
                            //yes
                        }
                    }
                    if(f)break;
                    if(a[i]==alen){
                        if(a[i]<b[i]){
                            f=1;
                            break;
                            //yes
                        }
                        else if(a[i] == b[i] && b[i]<blen){
                            f=1;
                            break;
                            //yes
                        }
                    }
                }
            }
            if(f)cout<<"YES\n";
            else cout<<"NO\n";
            
        }
    }
    return 0;
}