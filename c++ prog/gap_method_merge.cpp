#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

void sortab(vector<int> &a, vector<int> &b, int m,int n){
    int gap = (m+n)/2;
    while(gap>0){
        int i=0,j=gap;
        while(j<m+n){
            if(j<m && a[i]>a[j])swap(a[i],a[j]);
            else if(j>=m && i<m && a[i]>b[j-m])swap(a[i],b[j-m]);
            else if(j>=m && i>=m && b[i]>b[j])swap(b[i-m],b[j-m]);
            i++;
            j++;
        }
        if(gap==1)gap=0;
        else gap=(gap+1)/2;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> a(m),b(n);
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sortab(a,b,m,n);
    for(auto it:a)cout<<it<<" ";
    cout<<"\n";
    for(auto it:b)cout<<it<<" ";
    
    return 0;
}