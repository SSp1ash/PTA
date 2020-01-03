#include<iostream>
#include<string>
using namespace std;
bool check(string input){
	bool flag1=1;
	bool flag2=1;
	int i=input.find_first_of('P');
	int j=input.find_first_of('T');
	int i2=input.find_last_of('P');
	int j2=input.find_last_of('T');
	if(i!=i2||j!=j2) return false;
	for(int i=0;i<input.size();i++){
		if(input[i]!='P'&&input[i]!='T'&&input[i]!='A'&&input[i]!=0) return false;
	}
	int sum1=i-0;
	int sum2=j-i-1;
	int sum3=input.size()-j-1;
	if(sum2==0||sum1*sum2!=sum3){
		return false;
	}else{
		return true;
	}
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string input;
		cin>>input;
		if(check(input)==1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
