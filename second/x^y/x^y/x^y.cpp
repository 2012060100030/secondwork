#include"stdafx.h"
#include<iostream>
using namespace std;
int f(int x,int n){
	if(n==1){
		return x;
	}
	else{
		return (x*f(x,n-1));
	}
}
int main(){
	int x,y;
	cout<<"请输入底数x:";
	cin>>x;
	cout<<"请输入指数y:";
	cin>>y;
	cout<<"x的y次幂的结果是"<<f(x,y)<<endl;
	return 0;
}
