#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
	int N; //수열 크기
	int num[1001];
	int count=0;
	int num2[1001];
	cin>>N;
	for(int i=0;i<N;i++)
	    cin>>num[i];
	for(int i=0;i<N;i++){
	    num2[i]=1;
	    for(int j=0;j<i;j++){
	        if(num[i]>num[j])
		num2[i]=max(num2[i],num2[j]+1);
		}
	count=max(count,num2[i]);
}
	cout<<count;
}
