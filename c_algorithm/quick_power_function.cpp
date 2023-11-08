#include<bits/stdc++.h>
//求a的b次方对p的模，其中1<=a,b<=10^9
//根据数学知识有a*b%p=a%p*b%p
//每一个正整数可以唯一表示为若干指数不重复的2的次幂和 
using namespace std;
int quick_power_function(int a,int b,int p)
{
	int ans= 1%p;  //既是初始化，也是特判 p 为1的情况
	for(;b;b>>=1) {//b一直缩小二倍，也就是取根号， 
	if(b&1)ans=(long long)ans*a%p;//注意：当二进制为0001时再向右就是1/2，在int下也就是0 
    //b&1看看在二进制中b的那位存不存在，如果有的话就计算
	a=(long long)a*a%p;
	//a每次都要去平方 
	}
	return ans;
}
//一定要注意ab取值，会不会使数字超出内存 
int main ()
{
 int a,b,p;
 cin>>a>>b>>p;
 cout<<quick_power_function(a,b,p);
 return 0;	
	
}
