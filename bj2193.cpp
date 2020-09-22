#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(void){
	int N; //자릿수
	long long num[91][2];

	cin>>N;
	num[1][0]=num[2][1]=0;
	num[1][1]=num[2][0]=1;
	for(int i=3;i<=N;i++){
	    num[i][0]=num[i-1][0]+num[i-1][1];
	    num[i][1]=num[i-1][0];
	}
	cout<<num[N][0]+num[N][1];
}
