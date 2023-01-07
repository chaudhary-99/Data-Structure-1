/*10. Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
1 - Write a function to print the names of all the customers having balance less than $200.
2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and
then print the incremented value of their balance.*/
#include<stdio.h>
struct customer{
	int acc_no;
    char name[20];
	int balnc;
}s[5];
void Prntg_name_of_customer_having_balance_lessthan_200(){
    for(int i=0;i<5;i++){
       if(s[i].balnc<200){
          printf("%s ",s[i].name);
       }
    }
    printf("\n");
}
void Prntg_name_of_customer_having_balance_morethan_1000(){
    for(int i=0;i<5;i++){
       if(s[i].balnc>1000){
            s[i].balnc=s[i].balnc+100;
            printf("%d ",s[i].balnc);
       }
    }
    printf("\n");
}
int main(){
	for(int i=0;i<5;i++){
        scanf("%d",&s[i].acc_no);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].balnc);
    }
    Prntg_name_of_customer_having_balance_lessthan_200();
    Prntg_name_of_customer_having_balance_morethan_1000();
    
	return 0;
}