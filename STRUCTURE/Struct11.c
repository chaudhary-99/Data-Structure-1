/*11. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day,
month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".*/
#include<stdio.h>
struct Day{
	int day;
	int mon;
	int yr;
};
int main(){
    struct Day t1,t2;
    scanf("%d%d%d%d%d%d",&t1.day,&t1.mon,&t1.yr,&t2.day,&t2.mon,&t2.yr);
    if((t1.day==t2.day)&&(t1.mon==t2.mon)&&(t1.yr==t2.yr)){
           printf("Dates are equal");
    }
    else{
        printf("Dates are not equal");
    }
	return 0;
}