#include<bits/stdc++.h>
using namespace std;
/*
void sumall(int a[],int n){
    //to calculate the sum of all subarrays possible
    //no of subarrays possible = n*(n+1)/2
    int cs,mx=INT_MIN;
    cout<<"sum of all subarrays are: ";
    for(int i=0;i<n;i++){
        cs=0;
        for(int j=i;j<n;j++){
            cs+=a[j];
            cout<<cs<<" ";
            mx=max(mx,cs);
        }
    }
    cout<<"\nmaximum sum: "<<mx;
}

void arithematic_subarray(int a[],int n){
    //to calculate the length of the longest arithematic subarray
    //the subarray in which the difference between the consecutive elements is constant is called arithematic subarray
    int pd,cl=2,ans=2;
    pd=a[1]-a[0];
    int i=2;
    while(i<n){
        if(pd==a[i]-a[i-1]){
            cl++;
        }
        else{
            cl=2;
            pd=a[i]-a[i-1];
        }
        i++;
        ans=max(ans,cl);
    }
    cout<<"length of longest subarray is: "<<ans;

}

void record_breaker(int a[],int n){
    int ans=0,mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
            if((i+1)<n){
                if(a[i]>a[i+1]) ans++;
            }
            else ans++;
        }
    }
    cout<<"no of record breaking days: "<<ans;
}

void subarrwithgivensum(int a[],int n){
    int s;
    cout<<"Enter the sum: ";
    cin>>s;
    int cs=0,i=0,j=0,st=-1,en=-1;
    while(j<n && cs+a[j]<=s){
        cs+=a[j];
        j++;
    }
    if(cs==s){
        cout<<i+1<<" "<<j;
        return;
    }
    while(j<n ){
        cs+=a[j];
        while(cs>s){
            cs-=a[i];
            i++;
        }
        if(cs==s){
            st=i+1;
            en=j+1;
        }
        j++;
    }
    cout<<st<<" "<<en;
    return;
}

int kadane(int a[],int n){
    int curr_sum=a[0],max_sum=a[0];
    for(int i=1;i<n;i++){
        curr_sum=max(a[i],curr_sum+a[i]); 
        max_sum=max(max_sum,curr_sum);
    }
    //cout<<"maximum subarray sum is: "<<max_sum;
    return max_sum;
}
void circularsubarraysum(int a[],int n){
    int nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]*=-1;
    }
    int wrapsum =totalsum+kadane(a,n);
    cout<<"maximum sum: "<<max(wrapsum,nonwrapsum);
    return;

}
*/
void pairsum(int a[],int n){
    int low=0,high=n-1,currsum=0,k;
    cout<<"enter the required sum: ";
    cin>>k;
    for(int i=0;i<n;i++){
        currsum=a[low]+a[high];
        if(currsum==k){
            cout<<"pair found at indices: "<<low<<"  "<<high;
            return;
        }
        else if(currsum>k){
            high--;
        }
        else {
            low++;
        }
    }
    cout<<"no pair found !";
    return;
}
int main(){
    system("cls");
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"enter the array:\n";
    for(int i=0;i<n;i++)    cin>>a[i];
    //kadane(a,n);
    //sumall(a,n);
    //arithematic_subarray(a,n);
    //record_breaker(a,n);
    //subarrwithgivensum(a,n);
    //circularsubarraysum(a,n);
    pairsum(a,n);
    return 0;
}