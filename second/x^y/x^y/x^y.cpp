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
	cout<<"���������x:";
	cin>>x;
	cout<<"������ָ��y:";
	cin>>y;
	cout<<"x��y���ݵĽ����"<<f(x,y)<<endl;
	return 0;
}
