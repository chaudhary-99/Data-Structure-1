#include<stdio.h>
#define true 1
#define false 0
#define stacksize 15
#include<stdlib.h>
int item[stacksize];
struct stack{
	int top;
};
struct stack s;

void initialise(int i){
	s.top=(stacksize/3)*(i)-1;
}

int isempty(int i){
	if(s.top==(stacksize/3)*(i)-1){
		return true;
	}
	else{
		return false;
	}
}

void push(int x,int i,int item[]){
	if(s.top==(stacksize/3)*(i+1)-1){
		printf("Stack Ovderflow");
		exit(1);
	}
	else{
		s.top=((stacksize/3)*(i)-1)+1;
		item[s.top]=x;
	}	
}

int pop(int i,int item[]){
	if(s.top==(stacksize/3)*(i)-1){
		printf("Stack Underflow");
		exit(1);
	}
	else{
		int x=item[s.top];
		s.top--;
		return x;
	}
}
int stacktop(){
	return s[s.top];
}
int main{
    initialise(0);
    initialise(1);
    initialise(2);

    return 0;
}