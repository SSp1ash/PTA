#include<iostream>
using namespace std;
bool check(double a,double b,double c){
	if(a+b>c){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int a,b,c;
		cin>>a>>b>>c;
		if(check(a,b,c)){
			cout<<"Case #"<<i<<": true"<<endl;
		}else
			cout<<"Case #"<<i<<": false"<<endl;
		i++;
	}
	return 0;
}
