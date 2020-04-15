#include<iostream>
using namespace std;
int main(){
	string x;
	getline(cin,x);
	int data[128]={0};
	for(int i=0;i<x.size();++i){
		if(x[i]>='A'&&x[i]<='Z'){
			x[i]+=32;
		}
		if(x[i]>='a'&&x[i]<='z'){
			++data[x[i]];
		}
	}
	int max=0;
	int maxFlag=0;
	for(int i=97;i<122;++i){
		if(data[i]>max){
			max=data[i];
			maxFlag=i;
		}
	}
	cout<<char(maxFlag)<<" "<<max<<endl;
}
