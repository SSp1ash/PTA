#include<iostream>
#include<string>
using namespace std;
int main(){
	string input;
	int sum=0;
	cin>>input;
	int left,right;
	left=right=0;
	int len=input.size();
	int i=0;
	for(i=0;i<len;i++){
		if(input[i]=='P'){
			left++;
			continue;
		}
		if(input[i]=='A'){
			for(int j=len-1;j>i;j--){
				if(input[j]=='T'){
					right++;
					continue;
				}
			}
			break;
		}
	}
	i++;
	sum+=left*right;
	for(i;i<len;i++){
		switch(input[i]){
			case 'P':{
				left++;
				break;
			}
			case 'A':{
				sum+=left*right;
				if(sum>=1000000007) sum%=1000000007;
				break;
			}
			case 'T':{
				right--;
				break;
			}
		}
	}
	cout<<sum;
	return 0;
	
}
