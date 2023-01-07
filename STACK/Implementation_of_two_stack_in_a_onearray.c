#include<stdio.h>
#include<stdlib.h>
#define stacksize 10
#define true 1
#define false 0
struct stack{
	int item[stacksize];
	int TOP1;
	int TOP2;
};
struct stack s1,s2;

void initialize1(){
	s1.TOP1=-1;
}
void initialize2(){
	s2.TOP2=stacksize;
}

int Isempty1(){
	if(s1.TOP1==-1){
		return true;
	}
	else{
		return false;
	}
}
int Isempty2(){
	if(s2.TOP2==stacksize){
		return true;
	}
	else{
		return false;
	}
}

void push1(int x){
	if(s1.TOP1+1==s2.TOP2){
		printf("STACK OVERFLOW");
		exit(1);
	}
	else{
		s1.TOP1=s1.TOP1+1;
		s1.item[s1.TOP1]=x;
	}
}


void push2(int x){
	if(s1.TOP1+1==s2.TOP2){
		printf("STACK OVERFLOW");
		exit(1);
	}
	else{
		s2.TOP2=s2.TOP2-1;
		s2.item[s2.TOP2]=x;
	}
}

int pop1(){
	if(Isempty1 (s1)){
		printf("STACK UNDERFLOW");
		exit(1);
	}
	else{
		int x=s1.item[s1.TOP1];
		s1.TOP1=s1.TOP1-1;
		return x;
	}
}

int pop2(){
	if(Isempty2 (s2)){
		printf("STACK UNDERFLOW");
		exit(1);
	}
	else{
		int x=s2.item[s2.TOP2];
		s2.TOP2=s2.TOP2+1;
		return x;
	}
}
int stack_top1(){
	int x=s1.item[s1.TOP1];
	return x;
}
int stack_top2(){
	int x=s2.item[s2.TOP2];
	return x;
}
int main(){
	initialize1();
	initialize2();
		int x,y,r,t,u,b;
		scanf("%d %d",&x,&y,&r,&t,&b,&u);
		push1(x);
		push2(y);
		push2(r);
		push2(t);
		push2(b);
		push2(u);

		printf("%d %d %d %d %d %d",pop1(),pop2(),pop2(),pop2(),pop2(),pop2());
	
    
    return 0;
}