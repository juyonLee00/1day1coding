#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  string str;
  cin>>str;
  int size=str.size();
  string arr[1000];
  for(int i=0;i<size;i++){
    arr[i] = str.substr(i,size); //문자열 i~size까지 복사
  }
  sort(arr,arr+size);
  for(int i=0;i<size;i++){
    cout<<arr[i]<<'\n';
  }
}
//rm
