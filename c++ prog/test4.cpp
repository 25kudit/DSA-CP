#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl
#define mx (int)200005


struct segtree{
    int size;
    vector<int> sums;

    void init(int n){
        size=1;
        while(size<n)size*=2;
        sums.assign(2*size,0ll);
    }

    void set(int i,int t,int x,int lx,int rx){
        if(rx-lx==1){
            sums[x]=t;
            return;
        }
        int m=(lx+rx)/2;
        if(i<m)
            set(i,t,2*x+1,lx,m);
        else 
            set(i,t,2*x+2,m,rx);
        sums[x]=sums[2*x+1]+sums[2*x+2];

    }
    int calc(int l,int r,int x,int lx,int rx){
        if(l>=rx || r<=lx)return 0;
        if(l<=lx && r>=rx)return sums[x];
        int m = (lx+rx)/2;
        return calc(l,r, 2*x+1,lx,m) + calc(l,r,2*x+2,m,rx);
    }
    void build(vector<int> &a,int x,int lx,int rx){
        if(rx-lx==1){
            if(lx< a.size())sums[x]=a[lx];
            return ;
        }
        int mid=(lx+rx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        sums[x]=sums[2*x+1]+sums[2*x+2];
    }

};

int main()
{
    int n;
    n=3;
    segtree st;
    st.init(n);
    return 0;
}