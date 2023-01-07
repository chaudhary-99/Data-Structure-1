/*12. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. 
Write a program to increase the salary depending on the number of hours of work per day as follows and
then print the name of all the employees along with their final salaries. Hours of work per day 8
Increase in salary $50*/
#include<stdio.h>
struct employees{
	int salary;
    char name[20];
	int hours;
    
}s[3];
int main(){
	for(int i=0;i<3;i++){
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].salary);
        scanf("%d",&s[i].hours);
    }
    for(int i=0;i<3;i++){
        if(s[i].hours==8){
            s[i].salary=s[i].salary+50;
            printf("%s ",s[i].name);
            printf("%d ",s[i].salary);
            printf("%d ",s[i].hours);
        }
        printf("\n");
    }
	return 0;
}