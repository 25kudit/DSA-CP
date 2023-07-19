#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type,less<int> ,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int g[5][5];
ll printmax(int a[],vector<ll> &ds,int ind,int i,int s){
    if(i==5){
        s=max(s,g[ds[0]][ds[1]]+g[ds[1]][ds[0]]+2*g[ds[2]][ds[3]]+2*g[ds[3]][ds[2]]+g[ds[1]][ds[2]]+g[ds[2]][ds[1]]+2*g[ds[3]][ds[4]]+2*g[ds[4]][ds[3]]);
        return s;
    }
    ds[ind]=a[i];
    printmax(a,ds,ind+1,i+1,s);
    printmax(a,ds,ind,i+1,s);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>g[i][j];
        }
    }
    int a[]={0,1,2,3,4};
    vector<ll> ds;
    
    cout<<printmax(a,ds,0,0,0);


    return 0;
}