#include<bits/stdc++.h>
//��a��b�η���p��ģ������1<=a,b<=10^9
//������ѧ֪ʶ��a*b%p=a%p*b%p
//ÿһ������������Ψһ��ʾΪ����ָ�����ظ���2�Ĵ��ݺ� 
using namespace std;
int quick_power_function(int a,int b,int p)
{
	int ans= 1%p;  //���ǳ�ʼ����Ҳ������ p Ϊ1�����
	for(;b;b>>=1) {//bһֱ��С������Ҳ����ȡ���ţ� 
	if(b&1)ans=(long long)ans*a%p;//ע�⣺��������Ϊ0001ʱ�����Ҿ���1/2����int��Ҳ����0 
    //b&1�����ڶ�������b����λ�治���ڣ�����еĻ��ͼ���
	a=(long long)a*a%p;
	//aÿ�ζ�Ҫȥƽ�� 
	}
	return ans;
}
//һ��Ҫע��abȡֵ���᲻��ʹ���ֳ����ڴ� 
int main ()
{
 int a,b,p;
 cin>>a>>b>>p;
 cout<<quick_power_function(a,b,p);
 return 0;	
	
}
