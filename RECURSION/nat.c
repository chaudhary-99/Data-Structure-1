#include<stdio.h>
int nat(int a,int n){
	int f;
	if(n==0){
		return 1;
	}
	else{
		f=a*nat(a,n-1);
	}
	return f;
	
}
int main(){
	int n,a;
	scanf("%d%d",&n,&a);
	printf("%d",nat(a,n));
	return 0;
	
}