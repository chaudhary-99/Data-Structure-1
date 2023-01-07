#include<stdio.h>
#include<math.h>
int no_of_digits(int num){
	int c=0;
	while(num>0){
		int t=num%10;
		c++;
		num=num/10;
	}
	return c;
}
int main(){
    int num=567;
    printf("%d",no_of_digits(num));
	return 0;
}
