#include<iostream>
#include<string>
using namespace std;
void count(string input){
	int a[128]={0};
	for(int i=0;i<input.size();i++){
		a[input[i]]++;
	}
	for(int i=0;i<=9;i++){
		if(a['0'+i]!=0){
			cout<<i<<":"<<a['0'+i];
			cout<<endl;
		}
	}
}
int main(){
	string a;
	cin>>a;
	count(a);
}
