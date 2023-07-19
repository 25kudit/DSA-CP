#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<int> s;
    int i=0,j=0,ans=0;
    while(i<n && j< n){
        while(j<n && s.find(a[j])==s.end()){
            s.insert(a[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        while(j<n && s.find(a[j])!=s.end()){
            s.erase(a[i]);
            i++;
        }
    }
    cout<<ans;
    return 0;
}