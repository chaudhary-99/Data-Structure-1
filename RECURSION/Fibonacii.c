#include<stdio.h>
int fib(int n){
	int dat[10]={0};
	if(n==1){
		dat[1]=0;
	}
	else{
		if(n==2)
		   dat[2]=1;
		else{
			if(dat[n]==0){
				dat[n]=fib(n-1)+fib(n-2);
			}
		}
	}
	return dat[n];
}
int main(){
	printf("Enter the number");
	int n;
	scanf("%d",&n);
	printf("%d",fib(n));
	
	return 0;
}