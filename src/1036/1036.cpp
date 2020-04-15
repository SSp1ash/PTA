#include<iostream>
using namespace std;
void draw(int n,char input){
	int width=n;
	int height=double(n)/2+0.5;
	for(int i=0;i<height;i++){
		if(i==0||i==height-1){
			for(int x=0;x<width;x++){
				cout<<input;
				if(x==width-1&&i==0) cout<<endl;
			}
		}else{
			cout<<input;
			for(int i=0;i<width-2;i++){
				cout<<" ";
			}
			cout<<input;
			cout<<endl;
		}
	}
}
int main(){
	int n;
	char input;
	cin>>n;
	cin>>input;
	draw(n,input);	
}
