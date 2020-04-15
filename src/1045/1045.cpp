#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int L[n]={0};
	int R[n]={0};
	int max=arr[0];
	int min=arr[n-1];
	for(int i=0;i<n;++i){
		if(arr[i]>=max){
			max=arr[i];
			L[i]=1;
		}
	}
	for(int i=n-1;i>=0;--i){
		if(arr[i]<=min){
			min=arr[i];
			R[i]=1;
		}
	}
	vector<int> result;
	for(int i=0;i<n;i++){
		if(L[i]==1&&R[i]==1){
			result.push_back(arr[i]);
		}
	}
	if(result.size()==0){
		cout<<0<<endl;
		cout<<endl;
		return 0;
	}else{
		cout<<result.size()<<endl;
		sort(result.begin(),result.end());
		for(int i=0;i<result.size();++i){
			if(i!=result.size()-1)
			cout<<result[i]<<" ";
			else cout<<result[i]; 
		}
	}
	
	
}
