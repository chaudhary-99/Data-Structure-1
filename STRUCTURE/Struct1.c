/*Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the 
student is eligible for admission in Delhi University. 
A student is eligible for DU if he has scored 95 % or more in Best 4.*/
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