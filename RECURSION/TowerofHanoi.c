#include<stdio.h>
void Toh(int n,char S,char M,char D){
	if(n==1){
		printf("\n%c-->%c",S,D);
	}
	else{
		Toh(n-1,S,D,M);
		printf("\n%c-->%c",S,D);
		Toh(n-1,M,S,D);
	}
}
int main(){
	Toh(3,'S','M','D');
	
	return 0;
}