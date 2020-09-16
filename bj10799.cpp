#include<iostream>
#include<string>

using namespace std;

int main(){
    int leftNum=0;
    int sum=0;
    string str;

    cin>>str;
    for(int i=0;i<str.size();i++){
      if(str[i]=='(')
        leftNum+=1;
      else {
        leftNum-=1;
        if(str[i-1]=='('){
          sum+=leftNum;
        }
        else {
          sum+=1;
        }
      }
    }
    cout<<sum;
}
