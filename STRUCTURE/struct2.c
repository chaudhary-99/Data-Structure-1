/*Write a program to store and print the roll no., name, age and marks of a student using structures. 
Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the 
details of the student with roll no. 1.*/
#include<stdio.h>
struct std{
	int name;
	int roll_no;
	int m[6];
	
};
int main(){
	struct std s;
		scanf("%d%d",&s.name,&s.roll_no);
		for(int i=0;i<6;i++){
			scanf("%d",&s.m[i]);
		}
	int max=s.m[0],c,sum=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if(max<s.m[j]){
				max=s.m[j];
				c=j;
			}
		}
		sum=sum+max;
		s.m[c]=0;
		max=0;
	}
	if(sum>=95){
		printf("Eligible");
	}
	else{
		printf("Not Eligible");
	}
	return 0;
}