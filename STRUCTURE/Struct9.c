/*9. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). 
Store the information of the students. - Write a function to print the names of all the students having age 14.
 - Write another function to print the names of all the students having even roll no.
 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).*/
#include<stdio.h>
struct std{
	int roll_no;
    char name[20];
	int age;
    char address[20];
}s[5];
void Prntg_student_name_having_age_14(int a){
    for(int i=0;i<5;i++){
       if(s[i].age==14){
        printf("%s ",s[i].name);
       }
    }
    printf("\n");
}
void Prntg_student_having_even_rollno(){
    for(int i=0;i<5;i++){
       if(s[i].roll_no%2==0){
        printf("%s ",s[i].name);
       }
    }
    printf("\n");
}
void Prntg_student_name_of_given_rollno(int r){
    for(int i=0;i<5;i++){
        if(r==s[i].roll_no){
            printf("%s\n",s[i].name);
            printf("%d\n",&s[i].age);
            printf("%s\n",s[i].address);
        }
    }
}
int main(){
	for(int i=0;i<5;i++){
        scanf("%d",&s[i].roll_no);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].age);
        scanf("%s",&s[i].address);
    }
    printf("Enter the Roll no");
    int r;
    scanf("%d",&r);
    Prntg_student_name_of_given_rollno(r);
    Prntg_student_name_having_age_14(14);
    Prntg_student_having_even_rollno();
	return 0;
}