#include <bits/stdc++.h>
using namespace std;
int main(){
	long double a=3.14;
	int b,c,d,w=10;
	while(w>8){
	cout<<"����������Ҫ��ģʽ"<<"   1.�еı����� 2.ƽ���� 3.������"<<endl;
	cin>>d;
	if(d==1){
		cout<<"��Ҫ�Ӽ��п�ʼ��"<<endl;
		cin>>b;
		cout<<"��Ҫ�ڼ��н�����"<<endl;
		cin>>c;
		for(int i=b;i<=c;i++){
		cout<<i<<"��="<<i*a<<endl;
		}
	}
	else if(d==2){
		cout<<"��Ҫ�Ӽ���ƽ����ʼ��"<<endl;
		cin>>b;
		cout<<"��Ҫ�Ӽ���ƽ��������"<<endl;
		cin>>c;
		for(int i=b;i<=c;i++){
		cout<<i<<"*"<<i<<"="<<i*i<<endl;
		}
	}
	else if(d==3){
		cout<<"��Ҫ�Ӽ���������ʼ��"<<endl;
		cin>>b;
		cout<<"��Ҫ�Ӽ�������������"<<endl;
		cin>>c;
		for(int i=b;i<=c;i++){
		cout<<i<<"*"<<i<<"*"<<i<<"="<<i*i*i<<endl;
		}
	}
	else cout<<"�������ģʽ��Ų���ȷ"<<endl; 
}	
	return 0;
}
