#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0;
	int b=0;
	while(n--){
		int x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		if(x1+y1==x2&&x1+y1!=y2){
			b++;
		}
		if(x1+y1!=x2&&x1+y1==y2){
			a++;
		}
	}
	cout<<a<<" "<<b;
}
