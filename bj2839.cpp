#include<iostream>

using namespace std;

int main(){
	int n, ans=0;
	
	cin>>n;
	
	while(1){
		if(n%5==0){
			ans += n/5;
			cout<<ans;
			break;
		}
		n-=3;
		ans++;
		if(n<0){
			cout<<-1;
			break;
		}
	}
}
