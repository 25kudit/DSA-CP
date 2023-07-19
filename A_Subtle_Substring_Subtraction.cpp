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
        int n=s.length();
        ll sum=0;
        for(int i=0;i<n;i++){
            s[i]=(s[i]-'a'+1);
            sum+=s[i];
        }
        if(n%2==0){
            cout<<"Alice "<<sum<<"\n";
        }
        else{
            if(sum-s[0]>sum-s[n-1]){
                if(s[0]<sum-s[0]){
                    cout<<"Alice "<<sum-2*s[0]<<"\n";
                }
                else{
                    cout<<"Bob "<<2*s[0]-sum<<"\n";
                }
            }
            else{
                if(s[n-1]<sum-s[n-1]){
                    cout<<"Alice "<<sum-2*s[n-1]<<"\n";
                }
                else{
                    cout<<"Bob "<<2*s[n-1]-sum<<"\n";
                }
            }
        }

    }

    return 0;
}