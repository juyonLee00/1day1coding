#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

vector<int> v;

void happy(int n){
  if(n==1) {
    printf("HAPPY\n");
    return;
  }
  for(int i=0;i<v.size();i++){
    if(n==v[i]){
      printf("UNHAPPY\n");
      return;
    }
  }
  v.push_back(n);
  int sum=0;
  while(n){
    sum+=(n%10)*(n%10);
    n /= 10;
  }
  happy(sum);
}

int main(void){
    int n;
    cin >> n;
    happy(n);

    return 0;
}
