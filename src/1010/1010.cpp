#include<iostream>
using namespace std;
void derivation(int n,int x){
	n=n*x;
	x-=1;
	cout<<n<<" "<<x;
}
int main(){
	int n,x;
	cin>>n>>x;
	if(x==0){
		cout<<0<<" "<<0;
	}
	if(x!=0) derivation(n,x);
	while(cin>>n>>x){
		if(x==0) continue;
		cout<<" ";
		derivation(n,x);
	}
	return 0;
}
