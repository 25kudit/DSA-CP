#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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

int binsearch(int k,vector<int> &a,vector<int> &nums){
    int l=0,r=a.size()-1,ans;
    while(l<=r){
        int mid = (l+r)/2;
        if(nums[a[mid]]>=k){
            ans = a[mid];
            r=mid-1;
        }
        else l=mid+1;
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
        int n,k;
        cin>>n>>k;
        vector<int> a(n),res(k+1,0);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> left(n,-1),right(n,-1),temp;
        for(int i=0;i<n;i++){
            if(temp.size()==0 || a[*temp.rbegin()]<a[i]){
                left[i]=i;
                temp.push_back(i);
            }
            else{
                left[i]=binsearch(a[i],temp,a);
            }
        }
        temp.clear();
        for(int i=n-1;i>=0;i--){
            if(temp.size()==0 || a[*temp.rbegin()]<a[i]){
                right[i]=i;
                temp.push_back(i);
            }
            else{
                right[i]=binsearch(a[i],temp,a);
            }
        }
        for(int i=0;i<n;i++){
            res[a[i]]=2*(right[i]-left[i]+1);
        }        
        for(int i=1;i<=k;i++)cout<<res[i]<<" ";
        cout<<"\n";
    }
    return 0;
}