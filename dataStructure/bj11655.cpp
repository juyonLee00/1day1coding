#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
  string str;
  while(getline(cin, str)){
  int size = str.size();
  for (int i=0;i<size;i++){
    if(str[i]>='a' && str[i]<='m') str[i]+=13;
    else if(str[i]>='n' && str[i]<='z') str[i]-=13;
    else if(str[i]>='A' && str[i]<='M') str[i]+=13;
    else if(str[i]>='N' && str[i]<='Z') str[i]-=13;
  }
  cout<<str<<'\n';
}
}
//rm
