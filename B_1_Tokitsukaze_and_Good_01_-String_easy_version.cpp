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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int n1=0,n0=0,i=0,cnt=0;
        while(i<n){
            while(s[i]=='1'){
                i++;
                n1++;
            }
            if(n1%2==1){
                s[i]='1';
                cnt++;
                i++;
            }
            n1=0;
            while(s[i]=='0'){
                i++;
                n0++;
            }
            if(n0%2==1){
                s[i]='0';
                cnt++;
                i++;
            }
            n0=0;

        }
        cout<<cnt<<"\n";
    }

    return 0;
}