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



void calc( )
{
        int n=6,k=10;
        vector<int> v={7,1,9,3,3,7};
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
                int req = k-v[i];
                if(mp[req]>0){
                        cnt++;
                        mp[req]--;
                }
                else mp[v[i]]++;
        }
        cout<<cnt;

}

int fun (int p,int q,int r){
        for(int r=2;r<=5;r++){
                p=q+r;
                p=q+r+q;
                q=13+r;
        }
        return p+q;
}

signed main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        int T = 1;
        // cin >> T;
        // while (T--)
        {
                cout<<fun(8,2,4);
                return 0;
                int p,q,r;
                p=4;q=2;r=9;
                q=2+p;
                for(int r=5;r<7;r++){
                        if((1+p+q)<(q+p+1))q=(q+r)+p;
                        else{
                                p=p+r;
                                if((p+r+q)>(q+r)){
                                        p=2*q;
                                        p=(p+6)+r;

                                }
                                else{
                                        q=(r+r)+r;
                                        continue;
                                }
                        }
                }
                q=8+r;
                cout<<p+q+r;

                // PRIMS ALGO
                //  vector<vector<pair<int,int>>> adj;//first->vertex no.   second->weight
                //  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //first->weight     second->vertex no.
                //  int src=0,n=10,ans=0;
                //  vector<int> dist(n,INT_MAX);
                //  vector<bool> visited(n,0);
                //  pq.push({0,src});
                //  dist[src]=0;
                //  while(!pq.empty()){
                //      auto tp = pq.top();
                //      pq.pop();
                //      if(visited[tp.second]==true)continue;
                //      visited[tp.second]=true;
                //      ans+=tp.first;
                //      for(auto it :adj[tp.second]){
                //          int v=it.first,wt=it.second;
                //          if(visited[v]==false && dist[v]>wt ){
                //              dist[v]=wt;
                //              pq.push({wt,v});
                //          }
                //      }
                //  }

                // DIJKSTRA ALGO
                //  vector<vector<pair<int,int>>> adj;
                //  int n=10,src=0;
                //  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
                //  pq.push({0,src});
                //  vector<int> dist(n,INT_MAX);
                //  dist[src]=0;

                // while(!pq.empty()){
                //     auto tp = pq.top();
                //     pq.pop();

                //     for(auto it :adj[tp.second]){
                //         int v= it.first,wt=it.second;
                //         if(dist[v]>dist[tp.first]+wt){
                //             dist[v]=dist[tp.first]+wt;
                //             pq.push({dist[v],v});
                //         }
                //     }
                // }

                // KOSARAJU'S ALGO TO FIND STRONGLY CONNECTED COMP.
                //  stack<int> st;
                //  int n=10;
                //  vector<vector<int>> adj(n);
                //  vector<bool> visited(n,0);

                // //dfs to find descending order of visit time
                // function<void(int)> dfs=[&](int src){
                //     visited[src]=true;
                //     for(auto it : adj[src]){
                //         if(visited[it]==false)
                //             dfs(it);
                //     }
                //     st.push(src);
                // };

                // //reversing the edges by finding the transpose
                // vector<vector<int>> trans(n);
                // for(int i=0;i<n;i++){
                //     for(auto it :adj[i])
                //         trans[it].push_back(i);
                // }

                // for(int i=0;i<n;i++)visited[i]=false;

                // //dfs to traverse reversed graph
                // function<void(int)> dfs2=[&](int src){
                //     visited[src]=true;
                //     for(auto it :trans[src])
                //         if(visited[it]==false)
                //             dfs2(it);
                // };
                // int comp=0;

                // while(!st.empty()){
                //     int src=st.top();
                //     st.pop();

                //     if(visited[src]==true)continue;
                //     comp++;     //counts the strongly connected components
                //     dfs2(src);
                // }

                // BRIDGES IN A GRAPH
                //  int n=10;
                //  vector<vector<int>> adj(n);
                //  vector<int> intime(n,INT_MAX),least(n,INT_MAX);
                //  int time=0;
                //  vector<bool> visited(n,0);
                //  vector<pair<int,int>> bridges;

                // function<void(int,int)> dfs = [&](int src,int par){
                //     visited[src]=true;
                //     intime[src]=least[src]=time;
                //     time++;

                //     for(auto it: adj[src]){
                //         if(it == par)continue;
                //         else if(!visited[it]){
                //             dfs(it,src);
                //             least[src]=min(least[src],least[it]);
                //             if(intime[src]<least[it])
                //                 bridges.push_back({src,it});
                //         }
                //         else
                //             least[src]=min(least[src],least[it]);
                //     }
                // };

                // dfs(0,-1);

                // ARTICULATION POINTS IN GRAPH
                //  int n=10;
                //  vector<vector<int>> adj(n);
                //  vector<int> intime(n,INT_MAX),least(n,INT_MAX),ans;
                //  int time = 0;
                //  vector<bool> visited(n,0),points(n,0);

                // function<void(int ,int)> dfs = [&](int src,int par){
                //     visited[src]=1;
                //     intime[src]=least[src]=time;
                //     time++;
                //     int child=0;
                //     for(auto it : adj[src]){
                //         if(it == par)continue;
                //         else if(visited[it]==false){
                //             child++;
                //             dfs(it,src);
                //             least[src]=min(least[src],least[it]);
                //             if(intime[src]<=least[it] && par!=-1)
                //                 points[src]=1;
                //         }
                //         else
                //             least[src]=min(least[src],intime[it]);
                //     }
                //     if(child>1 && par==-1)
                //         points[src]=1;
                // };

                // for(int i=0;i<n;i++){
                //     if(visited[i]==false){
                //         dfs(i,-1);
                //     }
                // }

                // for(int i=0;i<n;i++){
                //     if(points[i]==1)
                //         ans.push_back(i);
                // }
                // if(ans.size()==0)return -1;
                // return ans;

                // DISJOINT SET UNION
                //  int n=10;
                //  vector<int> parent(n);
                //  vector<int> height(n,0);
                //  void initialize(){
                //      for(int i=0;i<n;i++)
                //          parent[i]=i;
                //  }
                //  int find(int x){
                //      if(parent[x]==x)
                //          return x;
                //      return parent[x]=find(parent[x]);
                //  }
                //  void union_r(int x ,int y){
                //      int xrep = find(x),yrep=find(y);
                //      if(xrep == yrep)return;
                //      if(height[xrep] > height[yrep]) parent[yrep]=xrep;
                //      else if(height[xrep]<height[yrep])parent[xrep]=yrep;
                //      else parent[yrep]=xrep,height[xrep]++;
                //  }
        }
        return 0;
}