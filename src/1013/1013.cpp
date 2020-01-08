#include<iostream>
using namespace std;
bool isPrimeNum(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
void primeNum(int m,int n){
	int count=1;
	int format=0;
	int num=2;
	while(count<=n){
		if(isPrimeNum(num)){
			if(count>=m&&count<=n){
				cout<<num;
				format++;
				if(format%10==0) cout<<endl;
				else if(count!=n)cout<<" ";
			}
			count++;
			num++;
			continue;
		}
		num++;
	}
}
int main(){
	int m,n;
	cin>>m>>n;
	primeNum(m,n);
}
