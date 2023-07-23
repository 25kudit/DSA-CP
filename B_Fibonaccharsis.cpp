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

void multiply(int F[2][2], int M[2][2]);
void power(int F[2][2], int n);
 
int fib(int n)
{
    int F[2][2] = { { 1, 1 }, { 1, 0 } };
    if (n == 0)
        return 0;
    power(F, n - 1);
 
    return F[0][0];
}
 
void power(int F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    int M[2][2] = { { 1, 1 }, { 1, 0 } };
 
    power(F, n / 2);
    multiply(F, F);
 
    if (n % 2 != 0)
        multiply(F, M);
}
 
void multiply(int F[2][2], int M[2][2])
{
    int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
 
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
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
        int a = fib(k-1),b=fib(k-2);
        cout<<a<<" "<<b<<"\n";
        int x =0,cnt=0,y;
        while(1){
            int temp=n-b*x;
            int y = temp/a;
            if(y<x)break;
            if(temp % a == 0)cnt++;
            x++;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}