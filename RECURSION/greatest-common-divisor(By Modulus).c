#include<stdio.h>

int gcd(int a,int b){
        if(a==0){
        	return b;
		}
		else{
	        if(b==0){
	        	return a;
			}
			else{
				if(a>b){
					gcd(a%b,b);
				}
				else{
					gcd(a,b%a);
				}
			}
		}	
}
int main(){
	int a=50,b=25;
	printf("%d ",gcd(a,b));
	
	return 0;
}