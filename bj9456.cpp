//rm
#include<iostream>
#define MAX 100001
#include <algorithm>
using namespace std;

int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    long long dp[MAX][3];
    long long arr[MAX][2];
    for(int i=1;i<=n;i++){
      cin>>arr[i][0];
    }
    for(int i=1;i<=n;i++)
      cin>>arr[i][1];

    dp[0][0]=dp[0][1]=dp[0][2]=0;

    for(int i=1;i<=n;i++){
      dp[i][0] = max(dp[i-1][0],max(dp[i-1][1], dp[i-1][2]));
      dp[i][1] = max(dp[i-1][0], dp[i-1][2])+arr[i][0];
      dp[i][2] = max(dp[i-1][0], dp[i-1][1])+arr[i][1];
    }
    long long ans = 0;
    for(int i=1;i<=n;i++) ans = max(max(ans,dp[i][0]), max(dp[i][1],dp[i][2]));
    cout<<ans<<'\n';
  }
}
