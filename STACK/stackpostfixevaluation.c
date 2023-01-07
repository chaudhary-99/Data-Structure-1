#include<stdio.h>
#include<stdlib.h>
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

void Postfix_evaluation(char postexp[]){

	int i=0;
	while(postexp[i]!='\0'){
		char sybl=postexp[i];
		if(sybl>='0'&&sybl<='9'){
            push(sybl-'0');
		}
		else{
			int b=pop();
			int a=pop();
			int value=Evaluation(a,b,sybl);
			push(value);
		}
		i++;
	}
	printf("%d",pop());
}

int main(){
	initialize();
	char postexp[20];
	scanf("%s",postexp);
	Postfix_evaluation(postexp);
	return 0;
}