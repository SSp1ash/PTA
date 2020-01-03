#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student{
	public:
		string name;
		string stuNo;
		int score;
};
void quickSort(vector<student> &arr,int begin,int end){
	if(begin>=end){
		return;
	}
	int i=begin;int j=end;student pivot=arr[begin];
	while(i<j){
		while(i<j&&arr[j].score>pivot.score) j--;
		if(i<j) arr[i++]=arr[j];
		while(i<j&&arr[i].score<pivot.score) i++;
		if(i<j) arr[j--]=arr[i];
	}
	arr[i]=pivot;
	quickSort(arr,begin,i-1);
	quickSort(arr,i+1,end);
}
int main(){
	int n;
	cin>>n;
	vector<student> arr;
	while(n--){
		student temp;
		cin>>temp.name>>temp.stuNo>>temp.score;
		arr.push_back(temp);
	}
	quickSort(arr,0,arr.size()-1);
	cout<<arr[arr.size()-1].name<<" "<<arr[arr.size()-1].stuNo<<endl;
	cout<<arr[0].name<<" "<<arr[0].stuNo;
}
