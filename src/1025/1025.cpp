#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
class LNode{
	public:
		string address;
		int data;
		string nextAddress;
		LNode *next;
		LNode(string address,int data,string nextAddress):address(address),data(data),next(NULL),nextAddress(nextAddress){}
		LNode():address(""),data(0),next(NULL),nextAddress(""){}
};
LNode reverseLink(LNode head,int k){
	if(head==NULL) return NULL;
	int i=k;
	LNode temp;
	while(i--){
		head=head->next;
		if(head==NULL){
			return NULL;
		}
	}
	temp=head->next;
	
}
LNode reverse(LNode *head){
	if(head->next=NULL){
		return head;
	}
	head->next->next=head;
	head->next=NULL;
}
void link(map<string,LNode> &datas,string fa){
	map<string,LNode>::iterator it;
	while(fa!="-1"){
		it=datas.find(fa);
		it->second.next=&datas.find(it->second.nextAddress)->second;
		fa=it->second.nextAddress;
	}
	if(fa=="-1"){
		it->second.next=NULL;
	}
}
void print(LNode *head){
	while(head!=NULL){
		cout<<head->nextAddress<<" ";
		head=head->next;
	}
}
int main(){
	string fa;
	int n,k;
	cin>>fa>>n>>k;
	map<string,LNode> datas;
	for(int i=0;i<n;i++){
		int data;
		string address,nextAddress;
		cin>>address>>data>>nextAddress;
		LNode temp(address,data,nextAddress);
		datas.insert(pair<string,LNode>(address,temp));
	}
	link(datas,fa);
	map<string,LNode>::iterator it;
	it=datas.find(fa);
	print(&it->second);
	
}
