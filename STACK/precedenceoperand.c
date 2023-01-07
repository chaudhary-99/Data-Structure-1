#include<stdio.h>

#define true 1
#define false 0

char prcd(char a,char b){
	if(a=='^'||a=='*'||a=='/'||a=='%'){
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
	int x;
	
    printf("%d",prcd('^','^'));
}