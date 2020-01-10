#include<iostream>
#include<string>
using namespace std;
void sciNum(string input){
	if(input[0]=='-') cout<<'-';
	int i=0;
	i=input.find_first_of('E');
	string numPart=input.substr(1,i-1);
	int zhiPart=atoi(input.substr(i+2,input.size()-i-2).c_str());
	if(input[i+1]=='-') zhiPart*=-1;
	numPart.erase(1,1);
	if(zhiPart>0){
		if(zhiPart>=numPart.size()-1){
			cout<<numPart;
			int count=zhiPart-numPart.size()+1;
			while(count--) cout<<0;
		}else{
			int i;
			for(i=0;i<zhiPart+1;i++){
				cout<<numPart[i];
			}
			cout<<".";
			for(i;i<numPart.size();i++){
				cout<<numPart[i];
			}
		}
	}else if(zhiPart==0){
		cout<<numPart[0]<<'.'<<numPart[1];
	}else{
		cout<<"0.";
		int count=zhiPart*(-1)-1;
		while(count--) cout<<0;
		cout<<numPart;
	}
}
int main(){
	string input;
	cin>>input;
	sciNum(input);
	return 0;
}
