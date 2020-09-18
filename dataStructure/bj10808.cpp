#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;

    for(int i='a';i<='z';i++){
      cout<<count(str.begin(), str.end(),i)<<" ";
    }
    cout<<"\n";
}
//rm
