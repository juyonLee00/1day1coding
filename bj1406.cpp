#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
  stack<char> cLeft, cRight;
  string str;
  int n;
  cin>>str;
  for(int i=0;i<str.size();i++){
    cLeft.push(str[i]);
  }
  cin>>n;
  while(n--){
    char alpha;
    cin>>alpha;
    if(alpha=='P') {
      char ch;
      cin>>ch;
      cLeft.push(ch);

    }
    else if(alpha=='L'){
      if(!cLeft.empty()){
      cRight.push(cLeft.top());
      cLeft.pop();
      }
    }
    else if(alpha=='D') {
      if(!cRight.empty()){
        cLeft.push(cRight.top());
        cRight.pop();
      }
    }
    else if(alpha=='B'){
      if(!cLeft.empty()){
        cLeft.pop();
    }
  }
  }
  while(!cLeft.empty())
    {cRight.push(cLeft.top()); cLeft.pop();}
  while(!cRight.empty()){
    cout<<cRight.top(); cRight.pop();
  }
  }
