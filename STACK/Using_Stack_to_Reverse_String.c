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
	char string[20];
	gets(string);
	int i=0;
	while(string[i]!='\0'){
		push(string[i]);
		i++;
	}
	while(!Isempty()){
		printf("%c",pop());
	}
	return 0;
}