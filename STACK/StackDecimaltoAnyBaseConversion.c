#include<stdio.h>
#define true 1
#define false 0
#define stacksize 20
#include<stdlib.h>
struct stack{
	int item[stacksize];
	int top;
};
struct stack s;

void initialise(){
	s.top=-1;
}

int  isempty(){
	if(s.top==-1){
		return true;
	}
	else{
		return false;
	}
}

void push(int x){
	if(s.top==stacksize-1){
		printf("Stack Ovderflow");
		exit(1);
	}
	else{
		s.top++;
		s.item[s.top]=x;
	}	
}

int pop(){
	if(s.top==-1){
		printf("Stack Underflow");
		exit(1);
	}
	else{
		int x=s.item[s.top];
		s.top--;
		return x;
	}
}

int stacktop(){
	return s.item[s.top];
}

int main(){
	initialise();
	int c;
	scanf("%d",&c);
	printf("write number for conversion");
	int num;
	char ch[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	scanf("%d",&num);
	while(c!=0){
		push(c%num);
		c=c/num;
	}
	while(!isempty()){
		int x=pop();
		if(num==16){
			printf("%c",ch[x]);
		}
		else{
			printf("%d",x);
		}
	
	}
	
	return 0;
}