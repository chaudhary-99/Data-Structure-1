#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define stacksize 10
#define true 1
#define false 0
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

int Evaluation(int a,int b ,char op){
	switch(op){
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
		case '/': return a/b;
		case '%': return a%b;
	}
        
}

void Prefix_evaluation(char prefixexp[]){

	int i=0;
	while(prefixexp[i]!='\0'){
		char sybl=prefixexp[i];
		if(sybl>='0'&&sybl<='9'){
            push(sybl-'0');
		}
		else{
			int a=pop();
			int b=pop();
			int value=Evaluation(a,b,sybl);
			push(value);
		}
		i++;
	}
	printf("%d",pop());
}

int main(){
	initialize();
	char prefixexp[20];
	scanf("%s",prefixexp);
    strrev(prefixexp);
	Prefix_evaluation(prefixexp);
	return 0;
}