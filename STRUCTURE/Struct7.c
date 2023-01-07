/*7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure
named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
#include<stdio.h>
#include<stdlib.h>
struct std{
	int roll_no;
    char name[20];
    int chem_marks;
	int maths_marks;
    int phy_marks;
}s[2];
int main(){
	for(int i=0;i<2;i++){
        scanf("%d",&s[i].roll_no);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].chem_marks);
        scanf("%d",&s[i].maths_marks);
        scanf("%d",&s[i].phy_marks);
    }
    int arr[2];
    for(int i=0;i<2;i++){
       arr[i]=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks)/3;
    }
    for(int i=0;i<2;i++){
        printf("%d ",s[i].roll_no);
        printf("%s ",s[i].name);
        printf("%d ",arr[i]);
        printf("\n");
    }
	return 0;
}