#include<bits/stdc++.h>
using namespace std;
void playgame(char answer){
	cout<<"确定要玩这个游戏吗？"<<endl; 
	cout<<"A.继续   B.退出"<<endl;
	cout<<"输入你的选择：";
	cin>>answer;
	if(answer=='A'){
		cout<<"好的，没问题！！"<<endl;
		cout<<endl;
	}
	else{
		cout<<"再见，胆小GUI！！"<<endl;
		return 0;
	}
}
