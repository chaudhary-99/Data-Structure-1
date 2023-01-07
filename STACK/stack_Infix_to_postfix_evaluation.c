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

int prcd(char a,char b){
	if(a=='('||b=='('){
		return false;
	}
	else if(b==')'){
			return true;
	}
	else if(a=='^'||a=='*'||a=='/'||a=='%'){
		if(b=='^'){
			return false;
		}
		else{
			return true;
		}
	}
	else{
		if(b=='+'||b=='-'){
			return true;
		}
		else{
			return false;
		}
	}
}

int main(){
	initialise();
	char infix[10];
	
	scanf("%s",infix);
	
	
	char prefix_exp[20];


	int i=0;
    int l=0;
	while(infix[l]!='\0'){
		if(infix[l]>='a'&&infix[l]<='z'){
			prefix_exp[i]=infix[l];
			i++;
		}
		else{
			while(!isempty()&&prcd(infix[l],stacktop())){
				int c=pop();
				prefix_exp[i]=c;
				i++;
			}
			push(infix[l]);
		}
		l++;
	}
	
	while(!isempty()){
		prefix_exp[i]=pop();
		i++;
	}
	prefix_exp[i]='\0';
	
    for(int k=0;prefix_exp[k]!='\0';k++){
    	printf("%c",prefix_exp[k]);
    	
	}	
	
	
	return 0;
}