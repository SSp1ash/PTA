#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void insort(vector<int> arr1,vector<int> arr2){
	int key=0;
	for(int i=2;i<arr2.size();i++){
		sort(arr1.begin(),arr1.begin()+i);
		if(key){
			cout<<"Insertion Sort"<<endl;
			sort(arr1.begin(),arr1.begin()+i);
			for(int i=0;i<arr1.size();i++){
				cout<<arr1[i];
				if(i<arr1.size()-1){
					cout<<" ";
				}
			}
			return;
		}
		if(arr1==arr2){
			key=1;
		}
	}
}
void mesort(vector<int> arr1,vector<int> arr2){
	int key=0;
	for(int i=2;;i*=2){
		for(int j=0;j<arr1.size();j+=i){
			sort(arr1.begin()+j,arr1.begin()+(i+j<arr1.size()?i+j:arr1.size()));
		}
		if(key){
			cout<<"Merge Sort"<<endl;
			for(int i=0;i<arr1.size();i++){
				cout<<arr1[i];
				if(i<arr1.size()-1)
				cout<<" "; 
			}
			return ;
		}
		if(arr1==arr2){
			key=1;
		}
		if(i>arr2.size()){
			return;
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr1(n,0);
	vector<int> arr2(n,0);
	for(int i=0;i<arr1.size();i++) cin>>arr1[i];
	for(int i=0;i<arr2.size();i++) cin>>arr2[i];
	insort(arr1,arr2);
	mesort(arr1,arr2);
	return 0;
}
