#include<iostream>
#include<string>
#include<vector>
using namespace std;
int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char marr[11]={'1','0','X','9','8','7','6','5','4','3','2'};
bool checkDetail(string input){
	int sum=0;
	for(int i=0;i<input.size()-1;i++){
		if(input[i]>='0'&&input[i]<='9'){
			sum+=(input[i]-'0')*weight[i];
			continue;
		}
		else return 0;
	}
	sum=sum % 11;
	if(marr[sum]==input[input.size()-1]){
		return 1;		
	}else{
		return 0;
	}
}
void check(int n){
	vector<string> datas;
	int j=n;
	while(j--){
		string temp;
		cin>>temp;
		datas.push_back(temp);
	}
	string result;
	for(int i=0;i<n;i++){
		if(checkDetail(datas[i])){
			result+='1';
		}else{
			result+='0';
		}
	}
	if(result.find('0')==-1){
		cout<<"All passed";
		return;
	}
	for(int i=0;i<n;i++){
		if(result[i]=='0'){
			cout<<datas[i]<<endl;
		}
	}
}
int main(){
	int n;
	cin>>n;
	check(n);
}
