#include<iostream>
#define MAX 10007
using namespace std;

int main(){
  int n;
  int dp[1001][1001];
  cin>>n;

  for(int i=0;i<=9;i++) dp[1][i]=1;
  for(int i=2;i<=n;i++){
    for(int j=0;j<=9;j++){
      for(int k=0;k<=j;k++){
        dp[i][j] += dp[i-1][k];
        dp[i][j] %= MAX;
      }
    }
  }
  long long ans = 0;
  for(int i=0;i<=9;i++) ans+=dp[n][i];
  cout<<ans%MAX;
}
