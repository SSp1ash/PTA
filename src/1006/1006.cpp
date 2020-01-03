#include<iostream>
using namespace std;
void write(int num){
	int n3=num%10;
	num/=10;
	int n2=num%10;
	num/=10;
	int n1=num%10;
	for(int i=0;i<n1;++i) cout<<"B";
	for(int i=0;i<n2;++i) cout<<"S";
	for(int i=1;i<=n3;++i) cout<<i;
}
int main(){
	int num;
	cin>>num;
	write(num);
}
