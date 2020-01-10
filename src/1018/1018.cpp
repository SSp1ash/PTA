#include<iostream>
using namespace std;
class player{
	public:
		int win;
		int tie;
		int lose;
		int Cwin;
		int Bwin;
		int Jwin;
		player(){
			win=0;
			tie=0;
			lose=0;
			Cwin=0;
			Bwin=0;
			Jwin=0;
		}
};
void jiaying(player &jia,player &yi){
	jia.win++;
	yi.lose++;	
}
void jiashu(player &jia,player &yi){
	jia.lose++;
	yi.win++;
}
void jiaping(player &jia,player &yi){
	jia.tie++;
	yi.tie++;
}
void cjb(){
	int n;
	cin>>n;
	player jia,yi;
	char a,b;
	while(n--){
		cin>>a>>b;
		switch(a){
			case 'C':{
				if(b=='C') jiaping(jia,yi);
				if(b=='J'){
					jiaying(jia,yi);
					jia.Cwin++;
				}
				if(b=='B'){
					jiashu(jia,yi);
					yi.Bwin++;
				} 
				break;
			}
			case 'J':{
				if(b=='C'){
					jiashu(jia,yi);
					yi.Cwin++;
				}
				if(b=='J') jiaping(jia,yi);
				if(b=='B'){
					jiaying(jia,yi);
					jia.Jwin++;
				}
				break;
			}
			case 'B':{
				if(b=='C'){
					jia.Bwin++;
					jiaying(jia,yi);
				}
				if(b=='J'){
					yi.Jwin++;
					jiashu(jia,yi);
				}
				if(b=='B') jiaping(jia,yi);
				break;
			}
		}
	}
	cout<<jia.win<<" "<<jia.tie<<" "<<jia.lose<<endl;
	cout<<yi.win<<" "<<yi.tie<<" "<<yi.lose<<endl;
	if(jia.Bwin>=max(jia.Cwin,jia.Jwin)) cout<<"B"<<" ";
	else if(jia.Cwin>=max(jia.Bwin,jia.Jwin)) cout<<"C"<<" ";
	else cout<<"J ";
	
	if(yi.Bwin>=max(yi.Cwin,yi.Jwin)) cout<<"B";
	else if(yi.Cwin>=max(yi.Bwin,yi.Jwin)) cout<<"C";
	else cout<<"J";
}
int main(){
	cjb();
}
