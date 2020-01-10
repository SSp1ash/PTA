#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void compoentLow(){
	vector<int> n(10,0);
	for(int i=0;i<10;i++){
		cin>>n[i];
	}
	string x;
	for(int i=0;i<n.size();i++){
		while(n[i]--){
			x+=i+'0';		}
	}	
	if(x[0]=='0'){
		for(int i=0;i<x.size();i++){
			if(x[i]!='0'){
				swap(x[0],x[i]);
				break;
			}
		}
	}
	cout<<x;
}
int main(){
	compoentLow();
}
