// combination.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout<<"������������е���ѡ����n:"<<endl;
	cin>>n;
	cout<<"������������е�ѡ����m:"<<endl;
	cin>>m;
	int result=f(n)/(f(n-m)*f(m));
	cout<<"��ô�����C��n��m�����Ϊ��"<<result<<endl;
}



