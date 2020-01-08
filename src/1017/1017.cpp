#include<iostream>
using namespace std;
void devide(string a,int b){
	int len=a.size();
	int r=0;
	for(int i=0;i<len;i++) a[i]-='0';
	for(int i=0;i<len;i++){
		if(i!=len-1){
			if(a[i]/b==0){
				a[i+1]+=a[i]*10;
				a[i]=0;
			}else{
				a[i+1]+=a[i]%b*10;
				a[i]/=b;
			}
		}else{
			if(a[i]/b==0){
				r=a[i];
				a[i]=0;
			}else{
				r=a[i]%b;
				a[i]/=b;
			}
		}
	}
	for(int i=0;i<len;i++) a[i]+='0';
	int i=0; int flag=0;
	while(i<len){
		if(a[i]!='0'){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1) a.erase(0,i);
	cout<<a<<" "<<r;
	
} 
int main(){
	string a;
	int b;
	cin>>a>>b;
	devide(a,b);
}
