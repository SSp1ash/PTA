#include<iostream>
using namespace std;
int dengcha(int n){
	int an=1+(n-1)*2;
	return (1+an)*n/2;
}
void printSand(int n,char x){
	if(n==1){
		cout<<x<<endl;
		cout<<0;
		return;
	}
	int i=0;
	int over=0;
	for(i=1;(dengcha(i)*2-1)<=n;i++){
	}
	i--;
	over=n-(dengcha(i)*2-1);
	i=(i-1)*2+1;
	int j=i;
	while(j>=1){
		int count=j;
		int count2=(i-j)/2;
		while(count2--) cout<<" ";
		while(count--) cout<<x;
		j-=2;
		cout<<endl;
	}
	j=3;
	while(j<=i){
		int count=j;
		int count2=(i-j)/2;
		while(count2--) cout<<" ";
		while(count--) cout<<x;
		j+=2;
		cout<<endl;
			
	}
	cout<<over;
}
int main(){
	int n;
	char x;
	cin>>n>>x;
	printSand(n,x);
}
