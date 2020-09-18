#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
  stack<int> s;
  int n;
  cin>>n;
  while(n--){
    string str;
    cin>>str;
    if(str=="push"){
      int n;
      cin>>n;
      s.push(n);
    }
    else if(str=="top"){
      cout<< (s.empty()? -1 : s.top() ) <<'\n';
    }
    else if(str=="pop"){
      cout<< (s.empty() ? -1 : s.top()) << '\n';
      if(!s.empty()){
        s.pop();
      }
    }
    else if(str=="size"){
      cout<<s.size()<<'\n';
    }
    else if(str=="empty"){
      cout<< s.empty() <<'\n';
    }
  }

}
