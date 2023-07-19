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
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0; i<n ; i++){
            cin >>a[i];
            b[i]=a[i];
        }
        
        sort(b.begin(),b.end());
        ll it=0;
        if(n%2==1) {
            if(a[0]!=b[0]){
                cout<<"NO\n";
                continue;
            }
            else{
                it+=1;
            }
        }
        int f=0;
        for(;it<n-1;){
            if((a[it]==b[it] || a[it]==b[it+1]) && (a[it+1]==b[it+1] || a[it+1]==b[it])){
                it+=2;
            }
            else{
                f=1;
                break;
            }
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";

    }

    return 0;
}