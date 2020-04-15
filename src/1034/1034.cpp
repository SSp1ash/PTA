#include<iostream>
#include<string>
using namespace std;
long long  maxCommDivisor(long long  a,long long  b){
	if(a<b) swap(a,b);
	if(a%b==0) return b;
	else maxCommDivisor(b,a%b);
}
long long  minCommMul(long long  a,long long  b){
	return a*b/maxCommDivisor(a,b);
}
string huajian(long long  x1,long long  x2){
	string result;
	if(x1==0){
		result+='0';
		return result;
	}
	long long  flag=0;
	if(x1<0){
		result+="(-";
		flag=1;
		x1*=-1;
	}
	long long  gongyue=maxCommDivisor(x1,x2);
	x1/=gongyue;
	x2/=gongyue;
	if(x2==1){
		result+=to_string(x1);
		if(flag==1) result+=')';
		return result;
	}
	long long  temp=x1/x2;
	if(temp>0){
		result+=to_string(temp);
		result+=" ";
		x1=x1%x2;
	}
	result+=to_string(x1);
	result+='/';
	result+=to_string(x2);
	if(flag==1){
		result+=')';
	}
	return result;
}
void add(long long  x1,long long  x2,long long  y1,long long  y2){
	cout<<huajian(x1,x2)<<" + "<<huajian(y1,y2)<<" = ";
	
	long long  min=minCommMul(x2,y2);
	x1*=min/x2;
	y1*=min/y2;
	cout<<huajian(x1+y1,min);
}
void subtra(long long  x1,long long  x2,long long  y1,long long  y2){
	cout<<huajian(x1,x2)<<" - "<<huajian(y1,y2)<<" = ";	
	
	long long  min=minCommMul(x2,y2);
	x1*=min/x2;
	y1*=min/y2;
	cout<<huajian(x1-y1,min);
}
void mul(long long  x1,long long  x2,long long  y1,long long  y2){
	cout<<huajian(x1,x2)<<" * "<<huajian(y1,y2)<<" = ";
	cout<<huajian(x1*y1,x2*y2);
}
void devision(long long  x1,long long  x2,long long  y1,long long y2){
	cout<<huajian(x1,x2)<<" / "<<huajian(y1,y2)<<" = ";	
	if(huajian(y1,y2)=="0"){
		cout<<"Inf";
		return;
	}
	long long c1=x1*y2;
	long long c2=x2*y1;
	if(c2<0){
		c1*=-1;
		c2*=-1;
	}
	cout<<huajian(c1,c2);
}
void rationNumCal(long long x1,long long x2,long long y1,long long y2){
	add(x1,x2,y1,y2);
	cout<<endl;
	subtra(x1,x2,y1,y2);
	cout<<endl;
	mul(x1,x2,y1,y2);
	cout<<endl;
	devision(x1,x2,y1,y2);
}
int main(){
	long long x1,x2,y1,y2;
	scanf("%lld/%lld",&x1,&x2);
	scanf("%lld/%lld",&y1,&y2);
	rationNumCal(x1,x2,y1,y2);
}
