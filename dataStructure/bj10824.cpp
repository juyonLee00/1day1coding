#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    string n1 = a+b;
    string n2 = c+d;

    long long num1 = stoll(n1);
    long long num2 = stoll(n2);
    cout<<num1+num2<<'\n';
}
//rm
