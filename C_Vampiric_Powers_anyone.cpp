#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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

struct Node{
    Node* list[2];
    
};

int maxSubarrayXOR(int N, int arr[])
{
    int n = N;
    int arr2[N];
    arr2[0] = arr[0];
    int ans = arr[0];
    for (int i = 1; i < N; i++)
    {
        arr2[i] = arr[i] ^ arr2[i - 1];
        ans = max(arr2[i], ans);
    }
    arr = arr2;
    Node *root = new Node();
    Node *node = root;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(32, 0);
        int x = arr[i];
        for (int j = 0; j < 32; j++)
        {
            v[j] = x % 2;
            x = x / 2;
        }

        node = root;
        for (int j = 31; j >= 0; j--)
        {
            if (node->list[v[j]] == NULL)
            {
                node->list[v[j]] = new Node();
            }
            node = node->list[v[j]];
        }
    }

    for (int i = 0; i < n; i++)
    {
        vector<int> v(32, 0);
        int x = arr[i];
        for (int j = 0; j < 32; j++)
        {
            v[j] = x % 2;
            x = x / 2;
        }
        node = root;
        int alpha = 0;
        for (int j = 31; j >= 0; j--)
        {
            if (node->list[!v[j]] != NULL)
            {
                alpha += pow(2, j);
                node = node->list[!v[j]];
            }
            else
            {
                node = node->list[v[j]];
            }
        }
        ans = max(ans, alpha);
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        cout<<maxSubarrayXOR(n,a)<<"\n";
        
    }
    return 0;
}