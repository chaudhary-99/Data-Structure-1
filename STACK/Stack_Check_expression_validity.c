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

int isempty(){
	if(s.top==-1){
		return true;
	}
	else{
		return false;
	}
}

void push(int x){
	if(s.top==stacksize-1){
		printf("Stack Overflow");
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
    char Exp[20]="(())";
    int i=0;
    while(Exp[i]!='\0'){
        if(Exp[i]=='('){
            push(Exp[i]);
        }
        else{
            pop();
        }
    }
    if(!isempty()){
        printf("Not Valid Expression\n");
    }
    else{
        printf("Valid Expression\n");
    }
    return 0;
}
