#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string convert(int num,int D){
	string output;
	if(num==0){
		output+='0';
	}
	while(num>0){
		int temp;
		temp=num%D;
		if(temp>=10){
			output+=(temp-10)+'A';
		}else{
			output+=temp+'0';
		}
		num/=D;
	}
	reverse(output.begin(),output.end());
	return output;
}
void Dadd(int a,int b,int D){
	int c=a+b;
	cout<<convert(c,D);
}
int main(){
	int a,b,d;
	cin>>a>>b>>d;
	Dadd(a,b,d);
}
