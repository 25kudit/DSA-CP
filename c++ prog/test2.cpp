#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = sqrt(n);
    int d1 = n - t * t, d2 = (t + 1) * (t + 1) - n;
    if (d1 < d2)
        cout << t * t << " " << d1 << "\n";
    else
        cout << (t + 1) * (t + 1) << " " << d2 << "\n";
    return 0;
}




// #define ll long long int
// #define pb push_back
// #define endl '\n'
// #define vll vector<long long int>
// #define vi vector<int>
// #define fo(i,n) for(int i=0;i<n;i++)
// ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define all(a) a.begin(),a.end()
// #define sz(x) (int)(x).size()
// #define mp make_pair

// ll binpow(ll a, ll b){
//     ll res=1;
//     while(b>0){
//         if(b&1){
//             res=res*a;
//         }
//         a=a*a;
//         b>>=1;
//     }
//     return res;
// }

// // int f(int i, vll v){
// // 	int n = v.size();
// // 	if(i==n-1){
// // 		ll sum = v[i-1]+v[i-2];
// // 		sum += v[i];
// // 		return 3-(sum%3);
// // 	}

// // 	ll sum = v[i] + v[i-1] + v[i-2];
// // 	if(sum % 3 == 0){
// // 		dp[i] = f(i+1,v);
// // 	}else{
// // 		ll temp = 3-(sum%3);
// // 		v[i] += temp;
// // 		int ans1 = temp + f(i+1,v);
// // 		v[i] -= temp;
// // 		v[i-1]	 += temp;
// // 		int ans2 = temp + f(i+1,v);
// // 		v[i-1] -= temp;
// // 		v[i-2] += temp;
// // 		int ans3 = temp+f(i+1,v);
// // 		v[i-2] -= temp;
// // 		dp[i] = min({ans1,ans2,ans3});
// // 	}

// // 	return dp[i];
// // }

// void solve3(){
// 	ll n;
// 	cin>>n;
// 	vll v(n);
// 	for(int i=0;i<n;i++){
// 		cin>>v[i];

// 	}
// 	ll dp[n+1][3];
//     for(int i=0;i<=n;i++){
//     	for(int j=0;j<=2;j++){
//     		dp[i][j] = 0;
//     	}
//     }

//     ll sum = v[2] + v[1] + v[0];
//     if(sum % 3 != 0){
//     	int temp = 3 - (sum % 3);
//     	dp[0][2] = temp;
//     	dp[1][1] = temp;
//     	dp[2][0] = temp;
//     }
//     if(n == 3){
//     	if(sum % 3 == 0)cout<<0<<'\n';
//     	else cout<<3 - (sum%3)<<'\n';
//     	return;
//     }

//     for(int i=3;i<n;i++){
//     	for(int j=0;j<3;j++){
//     		ll temp = v[i] + v[i-1] + v[i-2];
//     		temp += dp[i-1][j];
//     		temp += dp[i-2][j];

//     		if(temp % 3 != 0)dp[i][j] = (3- (temp % 3));
//     	}
//     }
//     ll ans1 = 0, ans2 = 0, ans3 = 0;
//     // for(int j=0;j<3;j++){
//     // 	for(int i=0;i<n;i++){
//     // 		cout<<dp[i][j]<<' ';
//     // 	}
//     // 	cout<<endl;
//     // }

//     for(int i=0;i<n;i++){
//     	ans1 += dp[i][0];
//     }
//     for(int i=0;i<n;i++){
//     	ans2 += dp[i][1];
//     }

//     for(int i=0;i<n;i++){
//     	ans3 += dp[i][2];
//     }

//     cout<<min({ans1,ans2,ans3})<<'\n';
// }
// void solve2(string a,string b,string c){
//     int nc=c.size(),res=-1;
//     for(int i=nc-1;i>=0;i--){
//         if(c[i]!=a[i] && c[i]!=b[i]){
//             res=i;
//             break;
//         }
//     }
//     string temp = "[ABCDEFGHIJKLMNOPQRSTUVWXYZ]",ans="";
//     for(int i=0;i<res;i++)ans+=temp;
//     ans+='[';
//     for(char ch='A';ch<='Z';ch++){
//         if(ch==c[res])continue;
//         ans+=ch;
//     }
//     ans+=']';
//     for(int i=res+1;i<nc;i++)ans+=temp;
//     cout<<ans;

// }

// int solve1(){
//     vector<int> people = {1,2,2,3,4};
//     vector<char> status={'+','+','-','+','+'};
//     int people_count=people.size();
//     map<int,int> mp;
//     int flag=0;
//     for(int i=0;i<people_count;i++){
//         if(status[i]=='+'){
//             if(mp[people[i]]==1){
//                 flag=1;
//                 break;
//             }
//             else mp[people[i]]=1;
//         }
//         else{
//             if(mp[people[i]]==0){
//                 flag=1;
//                 break;
//             }
//             else mp[people[i]]=0;
//         }
//     }
//     if(flag==1)return -1;
//     int curr=0,mx=0;
//     for(int i=0;i<people_count;i++){
//         if(status[i]=='+')curr++;
//         else curr--;
//         mx=max(mx,curr);
//     }
//     return mx;
// }

// void solve(){
//     string serverType="00?10??1?1";
//     int n = serverType.size(),it=0,cnt=0;
//     while(it<n && serverType[it]=='?')it++;
//     char curr = serverType[it];
//     it++;
//     while(it<n){
//         if(serverType[it]=='?'||serverType[it]==curr){
//             it++;
//             continue;
//         }
//         cnt++;
//         curr=serverType[it];
//         it++;
//     }
//     cout<<cnt;

// }

// int main() {
//     fast
//     ll t=1;
//     // cin>>t;
//     while(t--){
//         solve();
//     //    solve("AERB","ATRC","AGCB");
//     }

// 	// your code goes here
// 	return 0;
// }