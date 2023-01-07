#include<stdio.h>

int gcd(int a,int b){
        if(a==b){
        	return a;
		}
		else{
	        if(a>b){
	        	gcd(a-b,b);
			}
			else{
				gcd(a,b-a);
			}
		}	
}
int main(){
	int a=50,b=25;
	printf("%d ",gcd(a,b));
	
	return 0;
}