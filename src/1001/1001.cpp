#include<iostream>
using namespace std;
int slash(int n){
	int count=0;
	while(n!=1){
		if(n%2==0){
			n/=2;
		}else{
			n=(3*n+1)/2;
		}
		count++;
	}
	return count;
}
int main(){
	int num;
	cin>>num;
	cout<<slash(num);
	return 0;
}
