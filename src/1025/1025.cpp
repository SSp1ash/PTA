#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
class LNode{
	public:
		string address;
		int data;
		string nextAddress;
		LNode(string address,int data,string nextAddress):address(address),data(data),nextAddress(nextAddress){}
		LNode():address(""),data(0),nextAddress(""){}
};
map<string,LNode> datas;
LNode* getNext(LNode *p){
	map<string,LNode>::iterator it;
	if(p->nextAddress!="-1"){
		it=datas.find(p->nextAddress);
		return &it->second;
	}
	return NULL;
}
void print(LNode *p){
	while(p){
		printf("%s %d %s\n",p->address.c_str(),p->data,p->nextAddress.c_str());
//		cout<<p->address<<" "<<p->data<<" "<<p->nextAddress<<endl;
		p=getNext(p);
	}
}
void reverse(LNode *head){
	if(head==NULL||head->nextAddress=="-1"){
		return;
	}
	reverse(getNext(head));
	getNext(head)->nextAddress=head->address;
	head->nextAddress="-1";
}
int flag=0;
LNode* reverseList(LNode *head,int k,LNode *&rrhead){
	if(!head) return NULL;
	flag++;
	int i=k;
	i--;
	LNode *p=head;
	while(i--){
		p=getNext(p);
		if(!p){
			if(flag==1){
				rrhead=head;
			}
			return head;
		} 
	}
	if(flag==1){
		rrhead=p;
	}
	LNode *temp=getNext(p);
	p->nextAddress="-1";
	reverse(head);
	if(temp==NULL){
		head->nextAddress="-1";
	}
	else head->nextAddress=reverseList(temp,k,rrhead)->address;
	return p;
}
int main(){
	string fa;
	int n,k;
	cin>>fa>>n>>k;
	for(int i=0;i<n;i++){
		int data;
		string address,nextAddress;
		cin>>address>>data>>nextAddress;
		LNode temp(address,data,nextAddress);
		datas.insert(pair<string,LNode>(address,temp));
	}
	
	map<string,LNode>::iterator it;
	it=datas.find(fa);
	LNode *rhead;
	reverseList(&it->second,k,rhead);
	print(rhead);
	return 0;
}
