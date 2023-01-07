/*3. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.*/
#include<stdio.h>
struct std{
	int roll_no;
    char name[20];
	int age;
    char address[20];
    float marks;
}s[15];
int main(){
	for(int i=0;i<15;i++){
        scanf("%d",&s[i].roll_no);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].age);
        scanf("%s",&s[i].address);
        scanf("%f",&s[i].marks);
    }
    for(int i=0;i<15;i++){
        printf("%d ",s[i].roll_no);
        printf("%s ",s[i].name);
        printf("%d ",s[i].age);
        printf("%s ",s[i].address);
        printf("%0.2f ",s[i].marks);
        printf("\n");
    }
	return 0;
}