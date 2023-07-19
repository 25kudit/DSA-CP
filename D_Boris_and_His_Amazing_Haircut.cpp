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



    signed main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int T = 1;
        cin >> T;
        while (T--)
        {
            int n;
            cin>>n;
            vector<int> a(n),b(n);
            for(int i=0;i<n;i++)cin>>a[i];
            for(int i=0;i<n;i++)cin>>b[i];
            int m;
            cin>>m;
            multiset<int> raz;
            for(int i=0;i<m;i++){
                int t;
                cin>>t;
                raz.insert(t);
            }
            stack<int> st;
            int f=0;
            for(int i=0;i<n;i++){
                if(b[i]>a[i]){
                    f=1;
                    break;
                }
                if(st.size()>0 && b[i]==st.top())continue;
                while(st.size()>0 && st.top()<b[i])st.pop();
                // if(a[i]==b[i]){
                //     if(st.size()==0)continue;
                // }
                if(a[i]!=b[i]){
                    
                    if(st.size()>0 && b[i]==st.top())continue;
                    
                    if(raz.find(b[i])==raz.end()){
                        f=1;
                        // cout<<b[i]<<"\n";
                        break;
                    }
                    st.push(b[i]);
                    raz.erase(raz.find(b[i]));
                }
            }
            if(f)cout<<"NO\n";
            else cout<<"YES\n";
        }
        return 0;
    }