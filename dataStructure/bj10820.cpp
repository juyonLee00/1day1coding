#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
  string str;
  while(getline(cin, str)){
    int low=0;
    int up=0;
    int num=0;
    int blank=0;

    for (char x : str){
      if(x >= 'a' && x <= 'z') low+=1;
      else if(x>='A' && x<='Z') up+=1;
      else if(x>='0' && x<='9') num+=1;
      else if(x==' ') blank+=1;
    }
    cout<<low<<' '<<up<<' '<<num<<' '<<blank<<'\n';
  }
}
