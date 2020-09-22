//rm
#include<iostream>
#include<algorithm>
#define MAX 10001
using namespace std;

int main(){
  int n;
  int arr[MAX];
  int dp[MAX];
  cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    dp[1]=arr[1];
    dp[2]=arr[1]+arr[2];
    for(int i=3;i<=n;i++){
      dp[i]=dp[i-1];
      if(dp[i]<dp[i-2]+arr[i]){
        dp[i] = dp[i-2]+arr[i];
      }
      if(dp[i]<dp[i-3]+arr[i]+arr[i-1])
        dp[i] = dp[i-3]+arr[i]+arr[i-1];
  }
  cout<<dp[n];
}
