#include<stdio.h>
#include<stdlib.h>
#define stacksize 10
#define true 1
#define false 0
struct stack{
	int item[stacksize];
	int TOP;
};
struct stack s;

void initialize(){
	s.TOP=-1;
}

int Isempty(){
	if(s.TOP==-1){
		return true;
	}
	else{
		return false;
	}
}

void push(int x){
	if(s.TOP==stacksize-1){
		printf("STACK OVERFLOW");
		exit(1);
	}
	else{
		s.TOP=s.TOP+1;
		s.item[s.TOP]=x;
	}
}

int pop(){
	if(Isempty (s)){
		printf("STACK UNDERFLOW");
		exit(1);
	}
	else{
		int x=s.item[s.TOP];
		s.TOP=s.TOP-1;
		return x;
	}
}

int stack_top(){
	int x=s.item[s.TOP];
	return x;
}

int main(){
	int x;
	printf("ENTER THE NUMBER FOR DECIMAL TO BINARY CONVERSION\n");
	scanf("%d",&x);
	initialize();
	while(x!=0){
		int rem=x%2;
		push(rem);
		x=x/2;
	}
	while(!Isempty(s)){
		int a=pop();
		printf("%d",a);
	}
	return 0;
}