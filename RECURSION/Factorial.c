#include<stdio.h>
int fact(int num){
	if(num==1){
		return 1;
	}
	else{
		return num*fact(num-1);
	}
}
int main(){

	int num;
	printf("enter the number");
	scanf("%d",&num);
	
	printf("%d  ",fact(num));
	
	return 0;
}