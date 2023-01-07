/*6. Write a program to add two time in hour, minute and second using structure. The values of the time is to be taken from the user.*/
#include<stdio.h>
struct Time{
	int hr;
	int min;
	int sec;
};
int main(){
	struct Time t1={7,31,54};
	struct Time t2={2,55,36};
    struct Time t;
    t.sec=(t1.sec+t2.sec)%60;
    int x=(t1.sec+t2.sec)/60;
	t.min=(t1.min+t2.min+x)%60;	
	int y=(t1.min+t2.min+x)/60;
	t.hr=t1.hr+t2.hr+y;
	printf("%d  %d  %d",t.hr,t.min,t.sec);
	return 0;
}