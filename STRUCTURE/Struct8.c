/*8. Write a program to add, subtract and multiply two complex numbers using structures to function.*/
#include<stdio.h>
struct complex{
	int real;
	int img;
};
struct complex addition(struct complex c1,struct complex c2,struct complex c3){
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
	return c3;
}
struct complex Subtraction( struct complex c1,struct complex c2,struct complex c3){
    c3.real=c2.real-c1.real;
	c3.img=c2.img-c1.img;
	return c3;
}
struct complex division( struct complex c1,struct complex c2,struct complex c3){
    c3.real=c2.real/c1.real;
	c3.img=c2.img/c1.img;
	return c3;
}
struct complex multiplication( struct complex c1,struct complex c2,struct complex c3){
    c3.real=c1.real*c2.real;
	c3.img=c1.img*c2.img;
    return c3;
}
int main(){
	struct complex c1,c2,c3,c4;
    scanf("%d%d%d%d",&c1.real,&c1.img,&c2.real,&c2.img);
    printf("write 1.Addition\n 2.Subtraction\n 3.multiplication\n 4.Division\n ");
	int n;
	scanf("%d",&n);
    if(n==1){
        c4=addition(c1,c2,c3);
	}
	else if(n==2){
       c4=Subtraction(c1,c2,c3);
	}
	else if(n==3){
        c4=multiplication(c1,c2,c3);
	}
	else{
       c4=division(c1,c2,c3);
	}
	printf("%d %d",c4.real,c4.img);
	return 0;
}