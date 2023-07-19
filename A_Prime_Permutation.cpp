#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    
    {
        string s;
        cin>>s;
        int n = s.length();
        bool isprime[n+1];
        memset(isprime,true,sizeof(isprime));
        for(int i=2;i*i<=n;i++){
            if(isprime[i]==true){
                for(int j = i*i ;j<=n;j+=i){
                    isprime[j]=false;
                }
            }
        }
        // cout<<"HI";
        unordered_map<char,int> cf;
        multiset<char> ch;
        int maxf=0;
        char maxc;
        for(int i=0;i<n;i++){
            cf[s[i]]++;
            ch.insert(s[i]);
        }
        for(auto it:cf){
            if(it.second > maxf){
                maxf=it.second;
                maxc=it.first;
            }
        }
        for(int i=0;i<n;i++){
            if((i+1)!=1 && !((i+1)>n/2 && isprime[i+1] == true)){
                s[i]=maxc;
                maxf--;
            }
        }
        if(maxf<0){
            cout<<"NO\n";
            return 0;
        }
        else{
            cout<<"YES\n";
        }
        ch.erase(maxc);
        for(int i=0;i<n;i++){
            if((i+1)==1 || ((i+1)>n/2 && isprime[i+1]==true)){
                if(maxf > 0){
                    s[i]=maxc;
                    maxf--;
                }
                else{
                    s[i]=*ch.begin();
                    ch.erase(ch.begin());
                }
            }
        }
        cout<<s<<"\n";

    }

    return 0;
}