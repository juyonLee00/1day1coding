#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main(){
  int n;
  deque<int> deq;
  cin>>n;
  while(n--){
    string str;
    int num;
    cin>>str;
    if(str=="push_front") {
      cin>>num;
      deq.push_front(num);
    }
    else if(str=="push_back"){
      cin>>num;
      deq.push_back(num);
    }
    else if(str=="pop_front"){
      cout<< ( deq.empty() ? -1 : deq.front() ) <<'\n';
      if(!deq.empty()) deq.pop_front();
    }
    else if(str=="pop_back"){
      cout<< (deq.empty() ? -1 : deq.back()) << '\n';
      if(!deq.empty()) deq.pop_back();
    }
    else if(str=="size") {
        cout<< deq.size()<<'\n';
    }
    else if(str=="empty") {
      cout<<deq.empty()<<'\n';
    }
    else if(str=="front") {
      cout<<deq.front()<<'\n';
    }
    else if(str=="back") {
      cout<<deq.back()<<'\n';
    }
  }
}
