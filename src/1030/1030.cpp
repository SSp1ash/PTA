#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int perfectArr(int n,long long p){
	vector<long long> arr(n,0);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	sort(arr.begin(),arr.end());
	int maxm=1;
	int i=0;
	int cnt=0;
	int j=arr.size()-1;
	for(int i=0;i<arr.size()-1;i++){
		for(int j=cnt;j<arr.size();j++){
			if(arr[j]>arr[i]*p) break;
			if(arr[j]<=arr[i]*p){
				maxm=max(maxm,j-i+1);
			}
			cnt=j;
		}
	}
	return maxm;
}
int main(){
	int n;
	long long p;
	cin>>n>>p;
	cout<<perfectArr(n,p);
}
