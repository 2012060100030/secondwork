// combination.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
int f(int n){
	if(n==1){
		return n;
	}
	else{
		return n*f(n-1);
	}
}
void main(){
	int n,m;
	cout<<"请输入组合数中的总选择数n:"<<endl;
	cin>>n;
	cout<<"请输入组合数中的选择数m:"<<endl;
	cin>>m;
	int result=f(n)/(f(n-m)*f(m));
	cout<<"那么组合数C（n，m）结果为："<<result<<endl;
}



