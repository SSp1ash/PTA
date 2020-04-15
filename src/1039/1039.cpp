#include<iostream>
#include<string>
using namespace std;
int data[128]={0};
int data2[128]={0};
int main(){
	string input;
	int flag=0;
	cin>>input;
	int sum=0;
	int sum2=0;
	for(int i=0;i<input.size();++i){
		data[input[i]]++;
	}
	cin>>input;
	for(int i=0;i<input.size();++i){
		data2[input[i]]++;
	}
	for(int i=0;i<128;i++){
		if(data2[i]>data[i]){
			flag=1;
			sum+=(data2[i]-data[i]);
		}
		if(data[i]>data2[i]){
			sum2+=data[i]-data2[i];
		}
	}
	if(flag==0){
		cout<<"Yes "<<sum2;
	}else{
		cout<<"No "<<sum;
	}
}
