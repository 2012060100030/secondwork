// temprature.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
void change1(float T){
	cout<<"�����¶�ת��Ϊ�����¶���:"<<(9*T/5+32)<<endl;
}
void change2(float T){
	cout<<"�����¶�ת��Ϊ�����¶���:"<<(5*(T-32)/9)<<endl;
}
int main(){
	int t;
	cout<<"�����¶�ת�����¶�������1������������2"<<endl;
	cin>>t;
	float T=0;
	cout<<"�������¶�"<<endl;
	cin>>T;
	switch(t){
	case 1:change1(T);
		break;
	case 2:change2(T);
		break;
	}
	return 0;
}
