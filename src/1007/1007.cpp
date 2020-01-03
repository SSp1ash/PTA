#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool isPrime(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0) return false;
	}
	return true;
}
int get2PrimePair(int num){
	vector<int> primeNum;
	for(int i=2;i<=num;i++){
		if(isPrime(i)) primeNum.push_back(i);
	}
	int sum=0;
	for(int i=0;i<primeNum.size()-1;i++){
		if(primeNum[i+1]-primeNum[i]==2){
			sum++;
		}
	}
	return sum;
}
int main(){
	int num;
	cin>>num;
	cout<<get2PrimePair(num);
}
