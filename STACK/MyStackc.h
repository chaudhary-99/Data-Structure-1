#include<stdio.h>
#include<stdlib.h>
#define stacksize 20
#define true 1
#define false 
struct stack{
	char item[stacksize];
	char TOP;
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

void push(char x){
	if(s.TOP==stacksize-1){
		printf("STACK OVERFLOW");
		exit(1);
	}
	else{
		s.TOP=s.TOP+1;
		s.item[s.TOP]=x;
	}
}

char pop(){
	if(Isempty ()){
		printf("STACK UNDERFLOW");
		exit(1);
	}
	else{
		char x=s.item[s.TOP];
		s.TOP=s.TOP-1;
		return x;
	}
}

char stack_top(){
	char x=s.item[s.TOP];
	return x;
}
