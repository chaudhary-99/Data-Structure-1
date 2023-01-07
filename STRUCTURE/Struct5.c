/*5. Write a program to add two complex numbers using structure. The values of the complex number is to be taken from the user.*/
#include<stdio.h>
struct complex{
	int real;
	int img;
	
}c1,c2,c3;
int main(){
    scanf("%d%d%d%d",&c1.real,&c1.img,&c2.real,&c2.img);
    c3.real=c1.real+c1.real;
    c3.img=c2.img+c2.img;
	printf("%d %d",c3.real,c3.img);
	return 0;
}