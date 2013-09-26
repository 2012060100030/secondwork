// temprature.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
void change1(float T){
	cout<<"摄氏温度转化为华氏温度是:"<<(9*T/5+32)<<endl;
}
void change2(float T){
	cout<<"华氏温度转化为摄氏温度是:"<<(5*(T-32)/9)<<endl;
}
int main(){
	int t;
	cout<<"摄氏温度转华氏温度请输入1，否则请输入2"<<endl;
	cin>>t;
	float T=0;
	cout<<"请输入温度"<<endl;
	cin>>T;
	switch(t){
	case 1:change1(T);
		break;
	case 2:change2(T);
		break;
	}
	return 0;
}
