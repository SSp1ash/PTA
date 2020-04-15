#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	double s[n];
	double sum=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
		sum+=(i+1)*s[i]*(n-i);
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cout<<sum;
		
	
}
