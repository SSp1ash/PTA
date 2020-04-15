#include<iostream>
using namespace std;
int main(){
	string x;
	cin>>x;
	int datas[128]={0};
	for(int i=0;i<x.size();++i){
		datas[x[i]]++;
	}
	while(1){
		if(datas['P']>0){
			cout<<'P';
			--datas['P'];
		}
		if(datas['A']>0){
			cout<<'A';
			--datas['A'];
		}
		if(datas['T']>0){
			cout<<'T';
			--datas['T'];
		}
		if(datas['e']>0){
			cout<<'e';
			--datas['e'];
		}
		if(datas['s']>0){
			cout<<'s';
			--datas['s'];
		}
		if(datas['t']>0){
			cout<<'t';
			--datas['t'];
		}
		if(datas['P']==0&&datas['A']==0&&datas['T']==0&&datas['e']==0&&datas['s']==0&&datas['t']==0) break;
	}
	return 0;
}
