#include<iostream>
#include<math.h>
using namespace std;
void runtime(int a,int b){
	double count=b-a;
	int count2=round(count/100);
	int hh,mm,ss;
	hh=count2/3600;
	count2=count2%3600;
	mm=count2/60;
	count2=count2%60;
	ss=count2;
	printf("%02d:%02d:%02d",hh,mm,ss);
}
int main(){
	int a,b;
	cin>>a>>b;
	runtime(a,b);
}
